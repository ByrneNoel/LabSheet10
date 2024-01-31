// Noel Byrne
// C00299761
// 22/01/24
// Approx Time-Taken: 12 mins
// --------------------------------------------------
// Function that declares an array of 8 integers.
// User must enter numbers from 1-10.
// Displays largest, smallest, sum and average
// --------------------------------------------------
// Known Bugs:

#include <iostream>

void arrayCalulations();

int main3()
{

	arrayCalulations();


	system("Pause");
	return 1;
}

void arrayCalulations()
{
	const int MAX_NUMBERS = 8;
	int table_results[MAX_NUMBERS]{};
	int num1 = 0;
	float sum = 0.0f;
	float average = 0.0f;
	int largest_Num = 0;
	int smallest_Num = 11;

	std::cout << "Please enter 8 numbers between 1-10\n";

	for (int count = 0; count < MAX_NUMBERS; count++)
	{
		std::cin >> num1;

		if (num1 < 1 || num1 > 10)
		{
			std::cout << "Error please enter a number between 1-10\n";
			count--;
			continue;
		}

		table_results[count] = num1;

		if (num1 > largest_Num)
		{
			largest_Num = num1;
		}

		if (num1 < smallest_Num)
		{
			smallest_Num = num1;
		}

	}

	for (int count = 0; count < MAX_NUMBERS; count++)
	{
		std::cout << table_results[count] << " ";
	}

	for (int count = 0; count < MAX_NUMBERS; count++)
	{
		sum += table_results[count];
	}

	average = sum / MAX_NUMBERS;

	std::cout << "\nLargest number: " << largest_Num << "\n";
	std::cout << "Smallest number: " << smallest_Num << "\n";
	std::cout << "The sum: " << sum << "\n";
	std::cout << "The average is: " << average;
}
