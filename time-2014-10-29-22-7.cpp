#include <iostream>

void printTime(int hours, int minutes)
{
	std::cout << "Time: " << hours << ":" << minutes  << std::endl; 
}

int main(void)
{
	int hours = 0;
	int minutes = 0;

	do {
		std::cout << "Enter the number of hours: " << std::endl;
		std::cin >> hours;
	} while (hours < 0 || hours > 24);
	
	do {
		std::cout << "Enter the number of minutes: " << std::endl;
		std::cin >> minutes;
	} while (minutes < 0 || minutes > 59);

	printTime(hours, minutes);
	
	return 0;
}
