////
// Name: Josh Valerio
// Section: CS 131 - 2830?
// Program Name: Day Conversion
//
// Description: The goal of this program is to convert number of Days to Years, Months, Weeks, and Days.
//              The user will be prompted to input a number of days.
//              It will then output all of those given values via the console (screen).
////

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int Years = 365; 
	int Months = 30; 
	int Weeks = 7;
	int userDays;

	cout << "My name is Josh Valerio." << endl;
	cout << "Program 1: Convert Number of Days to Years, Months, Weeks, and Days." << endl;
	cout << "--------------------------------------------------------------------" << endl << endl;
	cout << "This program will convert the given number of days into Year, Month, Week, Day format.\n\n";
	cout << "Enter the total number of days: ";
	cin >> userDays;

	// I could not think of any shorter equation besides the following mess
	int outYears = userDays / Years;		
	int outMonths = (userDays - (outYears * Years)) / Months;
	int outWeeks = (userDays - (outYears * Years) - (outMonths * Months)) / Weeks;
	int outDays = userDays - (outYears * Years) - (outMonths * Months) - (outWeeks * Weeks);

	cout << "-------------------------------";
	cout << endl << "Year(s): " << outYears;
	cout << endl << "Month(s): " << outMonths;
	cout << endl << "Weeks(s): " << outWeeks;
	cout << endl << "Day(s): " << outDays << endl << endl;
	
	system("pause");
	return 0;
}

