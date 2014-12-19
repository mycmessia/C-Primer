// writing on a text file
#include <iostream>
#include <fstream>
#include <string>

int main()
{
	using namespace std;
	string filename;

	cout << "Enter name for new file: ";
	cin >> filename;
	ofstream fout(filename.c_str());

	fout << "lv: 10 skill1: 11 skill2: 12\n";
	fout.close();

	ifstream fin(filename.c_str());
	cout << "Here are the contents of " << filename << ":\n";
	/*char ch;
	while (fin.get(ch))
		cout << ch;
	cout << "Done\n";*/
	string lv;
	fin >> lv;
	cout << lv;
	fin.close();

	return 0;
}
