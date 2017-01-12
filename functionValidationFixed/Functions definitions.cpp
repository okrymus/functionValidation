// The program examples the function with liberies
// Function Validation improved
// Programmer: Panupong Leenawarat
// Last modified: 11/18/15

#include "functionPototype.h"
#include <iostream>
using namespace std;

void printTitle()           //  DONE
{
	cout
		<< endl
		<< "\t  This is program demonstrates how to use functions        " << endl
		<< "\t                  By Lee. Panupong                         " << endl << endl << endl;
}

double getPos()          //  DONE
{
	double number;
	cin >> number;    cin.ignore(80, '\n');

	while (number < 0)
	{
		cout << "\t" << number << " is NOT an positive. Try again: ";
		cin >> number;   cin.ignore(80, '\n');
	}
	return number;
}

double getPosNum()          //  DONE
{
	double number = getNum();

	while (number <= 0)
	{
		cout << "\t" << number << " is NOT an positive. Try again: ";
		number = getNum();
	}
	return number;
}

int getMultOfNum(int y)  //   DONE
{
	double number = getNum();

	while (number != int(number) || (int)number % y != 0)
	{
		cout << "\t" << number << " is NOT a multiple of " << y << ". Try again: ";
		number = getNum();
	}
	return (int)number;
}

char getLetter()
{
	char letter;
	cin >> letter;	cin.ignore(80, '\n');

	while ((!(letter >= 'a' && letter <= 'z') && !(letter >= 'A' && letter <= 'Z')))
	{
		cout << "\t" << letter << " is NOT a letter. Try again: ";
		cin >> letter;	cin.ignore(80, '\n');
	}
	return letter;
}

double getInRange(double startPoint, double endPoint)
{
	double number = getNum();

	while (number < startPoint || number > endPoint)
	{
		cout
			<< number << " is "
			<< (number < startPoint ? "less" : "greater")
			<< " than the range [" << startPoint << ", " << endPoint << "]. Try again: ";
		number = getNum();
	}
	return number;
}

int getPerfectSquare()
{
	double number = getNum();

	while (number < 0 || sqrt(number) != (int)sqrt(number))
	{
		cout << "\t" << (number < 0 ? "Perfect squares must be positive, so " : "")
			<< number << " is NOT a perfect square." << endl << "\tTry again: ";
		number = getNum();
	}
	return (int)number;
}

int getInt()
{
	double number = getNum();

	while (number != (int)number)
	{
		cout << "\t Please enter an integer: ";
		number = getNum();
	}
	return (int)number;
}

double getNum()
{
	double number;
	while (!(cin >> number))
	{
		cout << "\tNo letters please. Try again: ";
		cin.clear();
		cin.ignore(80, '\n');
	}
	cin.ignore(80, '\n');
	return number;
}
