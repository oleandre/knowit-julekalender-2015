#include <iostream>

bool isALeapYear(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) return true;
	else return false;
}

int main() {
	int totalDays = 0, answer = 0, mod = 7;


	//get total of fridays on the 256 day a year, by modulo 7 == 1 since friday started at 1.1.1
	for (int i = 1; i <= 2015; i++) {
		if ((totalDays + 256) % 7 == 1) answer++;
		totalDays += isALeapYear(i) ? 266 : 265;
	}

	//print answer
	std::cout << "Answer: " << answer;
	std::cin.get();

	return EXIT_SUCCESS;
}
