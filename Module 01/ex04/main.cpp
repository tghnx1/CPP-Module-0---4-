#include <fstream>  // for file streams
#include <iostream> // for debugging output
#include <string>

int main(int argc, const char *argv[])
{
  if (argc != 4)
    return 1;

  std::string s1 = argv[2];
  std::string s2 = argv[3];


  //open the infile:
  std::ifstream inputFile;
  inputFile.open(argv[1]);
  if (!inputFile.is_open())
  {
    std::cerr << "Error opening file" << std::endl;
    return 1;
  }


  //reading from the file
  std::string line, buffer;
  int first = 1;
  while (std::getline(inputFile, buffer))
  {
    if (!first)
      line += "\n" + buffer;
    else
      line += buffer;
    first = 0;
  }
  inputFile.close();


  //create a string to write
  std::string result;
  std::size_t found;
  size_t pos = 0;

    while(line[pos])
    {
      found = line.find(s1, pos);
      if (found != std::string::npos)
      {
        line.erase(found, s1.size());
        line.insert(found, s2);
        pos = found + s2.size();
      }
      else
        pos ++;
    }

  //create/open the outfile
  std::string newfilename = std::string(argv[1]) + ".replace";
  std::ofstream outFile(newfilename);
  if (!outFile)
    {
      std::cerr << "Error opening file" << std::endl;
      return 1;
    }

  //writing to the file
   outFile << line;
   outFile.close();
}