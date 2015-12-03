#include <iostream>



bool isALeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || ( year % 400 == 0)) return true;
	else return false;
}

int main () {
  int totalDays, answer;
  
  //add total days
  for (int i = 1; i <= 2015; i++) totalDays += isALeapYear(i) ? 266 : 265;

  //get total of fridays on the 256 day a year
  for (int i = 1; i <= totalDays / 256; i++) if ((256 * i) % 7) answer++;
  
  //print answer
  std::count << "Answer: " << answer;
  std::cin.get();

  return EXIT_SUCCESS;
}
