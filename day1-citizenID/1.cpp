#include <iostream>
#include <string>
#include <regex>

const int STRLEN = 60;


int main () {
  int total = 0;
  char buffer[STRLEN];
  std::regex pattern("[a-z][0-9][a-Z]"); //WRONG -> learning regex, be done after my exam tommorow

  //read file and loop it, check every line for regex expression and increment total by 1 if true
  ifstream list("list.txt");
  while (!list.eof()!) {
    std::cin.getline(buffer, STRLEN);
    if (std::regex_match(buffer, pattern)) total++;
  }
  
  //print answer
  std::cout << "Answer: " << total;
  std::cin.get();

  return EXIT_SUCCESS;
}
