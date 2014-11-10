#include <iostream>
#include "myTime3.h"

int main()
{
	using std::cout;
	using std::endl;

	Time coding(3, 35);
	Time play(2, 46);
	Time temp;

	cout << "coding and play: " << coding << " ; " << play << endl;

	temp = coding + play;	// operator+()
	cout << "coding + play: " << temp << endl;

	temp = coding * 1.16;
	cout << "coding * 1.17: " << temp << endl;
	cout << "10 * play: " << 10 * play << endl;

	return 0;
}
