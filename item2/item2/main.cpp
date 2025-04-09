/*
* @file main.cpp
* @brief File for the Exam Item Number 2 : void SortLetters(char* input, char* sortOrder)
*
* 2. Write a function that modifies an input string, sorting the letters according to a sort order
* defined by a second string. You may assume that every character in the input string also
* appears somewhere in the sort order string. Make your function as fast as possible for long
* input strings.
*
* void SortLetters(char* input, char* sortOrder)
*
* Example:
* char* inputStr = strdup(“trion world network”);
* SortLetters(inputStr, “ oinewkrtdl”);
* would modify the input string to “  oooinnewwkrrrttdl”.
*
* @author Von Wilhelm Guiang
* Contact: guiang.vw@gmail.com
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;


void SortLetters(char* input, char* sortOrder)
{
	int lastSortedIndex = 0;

	for (int sortOrderIndex = 0; sortOrderIndex < strlen(sortOrder); sortOrderIndex++)
	{
		for (int inputIndex = 0; inputIndex < strlen(input); inputIndex++)
		{
			if (sortOrder[sortOrderIndex] == input[inputIndex])
			{
				char temp = input[lastSortedIndex];
				input[lastSortedIndex] = input[inputIndex];
				input[inputIndex] = temp;

				lastSortedIndex++;
			}
		}
	}

}

int main()
{
	loop:

	string inputStr;
	string sortOrderStr;

	cout << "Enter the string that will be sorted \n:";
	getline(cin, inputStr);
	cout << "Enter the sorting order \n:";
	getline(cin, sortOrderStr);

	char* input = _strdup(inputStr.c_str());
	char* sortOrder = _strdup(sortOrderStr.c_str());

	SortLetters(input, sortOrder);
	cout << "Modified and sorted the input string to:\n'" << input << "'" << endl;

	char tryAgain = 'N';
	cout << "\n \t Do you want to try again? (Y/N): ";
	cin >> tryAgain;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	if (tryAgain == 'Y' || tryAgain == 'y')
	{
		goto loop;
	}

	return 0;
}
