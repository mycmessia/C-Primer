#include <iostream>
#include <climits>

const int ZERO = 0;

int main(void)
{
	using namespace std;
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars depcsited." << endl
	<< "Add $1 to each account." << endl << "Now ";

	sam += 1;
	sue += 1;
	
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars depcsited." << endl
	<< "Add $1 to each account." << endl << "Now ";	

	return 0;
}
