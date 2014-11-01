#include <iostream>

int main(void)
{
	using namespace std;

	const int RATE = 8;
	int height = -1;

	cout << "Please input a int of your height_";
	cin >> height;

	if (height < 50 || height > 200)
	{
		cout << "Your input is invaild.\n";
		return 1;
	}

	cout << "Your height is " << height / RATE << " feet " 
	<< height % RATE << " inches." << endl;

	return 0;
}
