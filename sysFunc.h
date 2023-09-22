//Made by Nebula/JasonTheOne111
#pragma once
#include <chrono>
#include <thread>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <algorithm>
#include <cctype>
#include <Windows.h>
#include <stdio.h>
#include <conio.h>
#include <random>
#define _WIN32_WINNT 0x0502
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds
int localWindowWidth = 854;
int localWindowHeight = 480;
void trace(string str, bool endLine = false, int alignment = 0)
{
	if (alignment == 0)
	{
		if (endLine)
		{
			cout << str << endl;
		}
		else
		{
			cout << str;
		}
	}
	else
	{
		if (endLine)
		{
			cout << setw(alignment) << str << endl;
		}
		else
		{
			cout << setw(alignment) << str;
		}
	}

}
/*string testVarReturning(string var1)
{
	return var1;
}*/
int strToInt(string str)
{
	int theInt = stoi(str);
	return theInt;
}
int strToDouble(string str)
{
	int theDouble = stod(str);
	return theDouble;
}
string doubleToStr(double doub)
{
	auto doub1 = to_string(doub);
	return doub1;
}
void setFixedPrecision(int prec = 0)
{
	cout << fixed << setprecision(prec);
}
void runTimerSecs(int timerLength = 1)
{
	sleep_for(seconds(timerLength));
}
void runTimerMilSecs(int timerLength = 1)
{
	sleep_for(milliseconds(timerLength));
}
string input(string question = "", bool tf = false)
{
	trace(question, tf);
	string newVar;
	cin >> newVar;
	return newVar;
}
void setWinTitle(string title = "pingas")
{
	string titleFull = "title " + title;
	const char* str = titleFull.c_str();

	// printing the char array
	system(str);
}
string lower(string var)
{
	transform(var.begin(), var.end(), var.begin(), [](unsigned char c) { return std::tolower(c); });
	return var;
}
string upper(string var)
{
	transform(var.begin(), var.end(), var.begin(), [](unsigned char c) { return std::toupper(c); });
	return var;
}
void changeColor(string c1 = "0", string c2 = "7")
{
	c1 = lower(c1);
	c2 = lower(c2);
	bool allowChange1 = false;
	bool allowChange2 = false;
	if (c1 == "black")
	{
		c1 = "0";
	}
	else if (c1 == "blue")
	{
		c1 = "1";
	}
	else if (c1 == "green")
	{
		c1 = "2";
	}
	else if (c1 == "aqua")
	{
		c1 = "3";
	}
	else if (c1 == "red")
	{
		c1 = "4";
	}
	else if (c1 == "purple")
	{
		c1 = "5";
	}
	else if (c1 == "yellow")
	{
		c1 = "6";
	}
	else if (c1 == "white")
	{
		c1 = "7";
	}
	else if (c1 == "gray")
	{
		c1 = "8";
	}
	else if (c1 == "light blue")
	{
		c1 = "9";
	}
	else if (c1 == "light green")
	{
		c1 = "a";
	}
	else if (c1 == "light aqua")
	{
		c1 = "b";
	}
	else if (c1 == "light red")
	{
		c1 = "c";
	}
	else if (c1 == "light purple")
	{
		c1 = "d";
	}
	else if (c1 == "light yellow")
	{
		c1 = "e";
	}
	else if (c1 == "light white")
	{
		c1 = "f";
	}

	if (c2 == "black")
	{
		c2 = "0";
	}
	else if (c2 == "blue")
	{
		c2 = "1";
	}
	else if (c2 == "green")
	{
		c2 = "2";
	}
	else if (c2 == "aqua")
	{
		c2 = "3";
	}
	else if (c2 == "red")
	{
		c2 = "4";
	}
	else if (c2 == "purple")
	{
		c2 = "5";
	}
	else if (c2 == "yellow")
	{
		c2 = "6";
	}
	else if (c2 == "white")
	{
		c2 = "7";
	}
	else if (c2 == "gray")
	{
		c2 = "8";
	}
	else if (c2 == "light blue")
	{
		c2 = "9";
	}
	else if (c2 == "light green")
	{
		c2 = "a";
	}
	else if (c2 == "light aqua")
	{
		c2 = "b";
	}
	else if (c2 == "light red")
	{
		c2 = "c";
	}
	else if (c2 == "light purple")
	{
		c2 = "d";
	}
	else if (c2 == "light yellow")
	{
		c2 = "e";
	}
	else if (c2 == "light white")
	{
		c2 = "f";
	}
	if (c2 == "0" or c2 == "1" or c2 == "2" or c2 == "3" or c2 == "4" or c2 == "5" or c2 == "6" or c2 == "7" or c2 == "8" or c2 == "9" or c2 == "a" or c2 == "b" or c2 == "c" or c2 == "d" or c2 == "e" or c2 == "f")
	{
		allowChange1 = true;
	}
	else
	{
		trace("\"" + c2 + "\" is not a valid color.", true);
	}
	if (c1 == "0" or c1 == "1" or c1 == "2" or c1 == "3" or c1 == "4" or c1 == "5" or c1 == "6" or c1 == "7" or c1 == "8" or c1 == "9" or c1 == "a" or c1 == "b" or c1 == "c" or c1 == "d" or c1 == "e" or c1 == "f")
	{
		allowChange2 = true;
	}
	else
	{
		trace("\"" + c1 + "\" is not a valid color.", true);
	}
	if (allowChange1 and allowChange2)
	{
		c1 = upper(c1);
		c2 = upper(c2);
		string colorFull = "color " + c1 + c2;
		const char* str = colorFull.c_str();
		system(str);
	}
}
void resetColor()
{
	changeColor();
}
void clear() // Found code on stack overflow, credit to user "Swift - Friday Pie"
{
	DWORD Unused = 0;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	COORD zerozeroc = { 0, 0 };
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	DWORD Length = csbi.dwSize.X * csbi.dwSize.Y;
	FillConsoleOutputCharacterW(GetStdHandle(STD_OUTPUT_HANDLE), ' ', Length, zerozeroc, &Unused);
	FillConsoleOutputAttribute(GetStdHandle(STD_OUTPUT_HANDLE), csbi.wAttributes, Length, zerozeroc, &Unused);
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), zerozeroc);
}

// -- v1.1.0 -- 
void setWindowSize(int width, int height) // Found code on stack overflow, credit to user "Samarth S"
{
	HWND hwnd = GetConsoleWindow();
	if (hwnd != NULL) { SetWindowPos(hwnd, 0, 0, 0, width, height, SWP_SHOWWINDOW | SWP_NOMOVE); }
	localWindowWidth = width;
	localWindowHeight = height;
}
void setWindowPos(int x, int y)// Found code on stack overflow, credit to user "dgo" for making the post, and "p.s.w.g" for editing it
{
	//Get the window console handle(isn't the right code but works for these sample
	HWND ConsoleWindow;
	ConsoleWindow = GetForegroundWindow();

	//Getting the desktop hadle and rectangule
	HWND   hwndScreen;
	RECT   rectScreen;
	hwndScreen = GetDesktopWindow();
	GetWindowRect(hwndScreen, &rectScreen);

	//Set windows size(see the width problem)
	SetWindowPos(ConsoleWindow, NULL, 0, 0, 1000, 500, SWP_SHOWWINDOW);
	//SetWindowPos(ConsoleWindow, NULL, 0, 0, localWindowWidth, localWindowHeight, SWP_SHOWWINDOW);

	// Get the current width and height of the console
	RECT rConsole;
	GetWindowRect(ConsoleWindow, &rConsole);
	int Width = rConsole.left = rConsole.right;
	int Height = rConsole.bottom - rConsole.top;

	//caculate the window console to center of the screen	
	int ConsolePosX;
	int ConsolePosY;
	ConsolePosX = x;
	ConsolePosY = y;
	SetWindowPos(ConsoleWindow, NULL, ConsolePosX, ConsolePosY, localWindowWidth, localWindowHeight, SWP_SHOWWINDOW);
}
void waitForInput()
{
	_getch(); // wait for keypress
}
int getRandomInt(int from = 0, int to = 10)
{
	srand(time(0));
	return rand() % (to - from) + from;
}
