// The program examples the function
// Function Validation
// Programmer: Panupong Leenawarat
// Last modified: 11/16/15

#include <iostream> 
#include "functionPototype.h"
using namespace  std;

int main()
{
	double number, startPoint, endPoint;
	int y, intNumber;
	char letter;
	
	system("COLOR 3F");
	printTitle();

	while (true)
	{
		//      PART    1                DONE  
		cout
			<< "Part 1 (get positive number - assume number is entered) " << endl
			<< "\t**   write and use the getPos() function   **         " << endl;
		
		cout << "Enter a number: ";
		number = getPos();

		cout << "\tGood! " << number << " is an positive." << endl << endl;

		cout << endl;
		//       PART    2              DONE 
		cout
			<< "Part 2 (get positive number - no assumption)            " << endl
			<< "\t**   write and use the getPosNum() function   **      " << endl;

		cout << "Enter a number: ";
		number = getPosNum();

		cout << "\tGood! " << number << " is an positive." << endl << endl;

		cout << endl;
		//       PART    3                   DONE
		cout
			<< "Part 3 (get a multiple of 5)                            " << endl
			<< "\t**   write and use getMultOfNum() function   **       " << endl;

		cout << "Enter a multiple of 5: ";
		intNumber = getMultOfNum(5);

		cout << "\tGood! " << intNumber << " is a multiple of 5" << "!" << endl << endl;

		cout << endl;
		//       PART    4              DONE 
		cout
			<< "Part 4 (get a letter)                                   " << endl
			<< "\t**   write and use the getLetter() function   **      " << endl;

		cout << "Enter a letter : ";
		letter = getLetter();

		cout << "\tGood! " << "\'" << letter << "\'" << " is a letter!" << endl << endl;

		cout << endl;

		//        PART   5              DONE 
		cout
			<< "Part 5 (get a number between [e, s])                    " << endl
			<< "\t**   write and use getInRange(s, e) function   **     " << endl;

		cout << "What is the starting point? ";
		startPoint = getNum();
		cout << "What is the ending point? ";
		endPoint = getNum();

		cout << "\nEnter a number in the range[" << startPoint << ", " << endPoint << "]: ";
		number = getInRange(startPoint, endPoint);

		cout << "\tGood! " << number << " is a number in [" << startPoint << ", " << endPoint << "]" << endl << endl;

		cout << endl;
		//         PART   6                 DONE

		cout
			<< "Part 6 (get a perfect square)                           " << endl
			<< "\t**   write and use getPerfectSquare() function   **   " << endl;

		cout << "Enter a perfect square: ";
		intNumber = getPerfectSquare();

		cout << "\tGood! " << intNumber << " is a perfect square!" << endl;

		cout << endl;
		//          PART   7   done
		cout
			<< "Part 7 (get a multiple of n)                            " << endl
			<< "**   write and use getMultOfNum(int) function    **     " << endl;

		cout << "What number you wish to get the multiple of? ";
		y = getInt();

		cout << "Enter a multiple of " << y << ": ";
		intNumber = getMultOfNum(y);

		cout << "\tGood! " << intNumber << " is a multiple of " << y << "!" << endl << endl;

		cout << endl;
		cout << "\t*****************************" << endl;
	}
	return 0;
}

