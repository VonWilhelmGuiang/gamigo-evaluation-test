/*
* @file main.cpp
* @brief File for the Exam Item Number 1 : bool AllDigitsUnique(unsigned int value)
*
*
* 1. Write a function that takes an unsigned integer as input,
* and returns true if all the digits in the base
* 10 representation of that number are unique.
*
* bool AllDigitsUnique(unsigned int value)
*
* Example:
* AllDigitsUnique(48778584) returns false
* AllDigitsUnique(17308459) returns true
*
*
* @author Von Wilhelm Guiang
* Contact: guiang.vw@gmail.com
*/

#include <iostream>
#include <string>
using namespace std;

/*
* @brief Check if the string are all numbers
* @param value - string
*/
bool isNumber(string value)
{

	for (int i = 0; i < value.length(); i++) {
		if (!isdigit(value[i])) {
			return false;

		}
	}

	return true;
}

/*
* function that takes an UNSIGNED INTEGER as input
* and returns true if all the digits in the base 10 representation of that number are unique.
*
* @brief Check if all the digits in the base 10 representation of that number are unique.
* @param value - unsigned int
* @return bool
*/
bool AllDigitsUnique(unsigned int value)
{

	while (value > 0 && (value % 100 > 9)) {
		unsigned int currentDigit = value % 10; // Get the last digit of the number
		value /= 10; // Remove the last digit of the number

		unsigned int currentValue = value;

		while (currentValue > 0) {
			unsigned int digitChecker = currentValue % 10;
			currentValue /= 10;

			if (currentDigit == digitChecker) {
				return false;
			}

		}

	}
	return true;
}

int main()
{
	loop:

	string value;
	cout << "Enter INT that will be checked if all the digits in the base 10 representation of that number are unique. \n: ";
	cin >> value;

	try {

		bool inputIsNumber = isNumber(value);

		if (!inputIsNumber) {
			throw exception("\t Only whole numbers are accepted.");
		}

		unsigned int numbers = stoi(value);
		bool isAllUnique = AllDigitsUnique(numbers);
		cout << boolalpha;
		cout << "\t All Digits Unique: " << isAllUnique << endl;

	}
	catch (const exception e) {
		std::cerr << e.what() << std::endl;
	}


	char choice;
	cout << "\t Do you want to try again? (Y/N): ";
	cin >> choice;

	if (choice == 'Y' || choice == 'y') {
		goto loop;
	}

	return 0;
}