// LessonTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string text;
	map < string, int> count;

	while (text != "Stop" && text != "stop")
	{
		cout << "Input your text: " << endl;
		cin >> text;
		if (text == "stop" || text == "Stop")
		{
			break;
		}
		if (count.find(text) == count.end())
		{
			/*count.insert(pair<string, int>(text, 1));*/
			count[text] = 1;
		}
		else
		{
			count[text]++;
		}
	}

	cout << "------------------------------------------------------------------------------------" << endl;

	map<string, int>::iterator item;

	for (item = count.begin(); item != count.end(); item++)
	{
		cout << item->first << " " << item->second << endl;
	}
	{

	}

}
