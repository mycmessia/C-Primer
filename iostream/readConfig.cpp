#include <iostream>
#include <string>
#include <fstream>

#define MAX_LINE_SIZE 1000

using namespace std;

static bool readLevel(const int lvNum, std::string & lvData)
{
	fstream lvConfig;
	lvConfig.open("lvConfig");
	if (!lvConfig.is_open())
	{
		std::cout << "Can not open lvConfig!" << std::endl;
	}

	char temp[MAX_LINE_SIZE];
	int lineCount = 0;
	while (!lvConfig.eof()) // 循环读取每一行
	{
		lvConfig.getline(temp, MAX_LINE_SIZE);
		std::string line(temp);
		
		size_t pos = line.find(':');	// 找到每行的冒号
		if (pos == std::string::npos)
		{
			lvConfig.close();
			return false;
		}
		
		if (lineCount == lvNum)
		{
			lvData = line.substr(pos + 1);	// get str after :
			lvConfig.close();
			return true;
		}
		
		lineCount++;
	}
	lvConfig.close();
	return false;
}

int main(void)
{
	std::string lvData;

	if (readLevel(2, lvData))
		std::cout << lvData << std::endl;

	for (string::size_type i = 0; i < lvData.size(); i++)
	{
		if (isdigit(lvData[i]))
			cout << "a number\n";
	}

	return 0;
}
