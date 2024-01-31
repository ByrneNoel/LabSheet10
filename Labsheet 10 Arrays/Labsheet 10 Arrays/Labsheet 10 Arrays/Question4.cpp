// Noel Byrne
// C00299761
// 22/01/24
// Approx Time-Taken: 25 mins
// --------------------------------------------------
// Function that declares an array of 8 integers.
// User must enter numbers from 1-10.
// Displays largest, smallest, sum and average
// highest occurence and lowest
// --------------------------------------------------
// Known Bugs:

#include <iostream>

void arrayCalulations1();

int main4()
{

	arrayCalulations1();


	system("Pause");
	return 1;
}

void arrayCalulations1()
{
	const int MAX_NUMBERS = 8;
	int table_results[MAX_NUMBERS]{};
	int num1 = 0;
	float sum = 0.0f;
	float average = 0.0f;
	int largest_Num = 0;
	int smallest_Num = 11;
	int highest = table_results[0];
	int smallest = 11;
	int position_Large = 0;
	int position_Small = 0;
	int large_Counter = 0;
	int small_Counter = 0;


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

		if (num1 > highest)
		{
			highest = table_results[count];
			position_Large = count;
			large_Counter = 1;
		}

		else if (table_results[count] == highest)
		{
			large_Counter++;
		}
	

		if (num1 < smallest)
		{
			smallest = table_results[count];
			position_Small = count;
			small_Counter = 1;
		}

		else if (table_results[count] == smallest)
		{
			small_Counter++;
		}

		
	}

	for (int count = 0; count < MAX_NUMBERS; count++)
	{
		std::cout << table_results[count] << " ";
	}

	for (int count = 0; count < MAX_NUMBERS; count++)	// sums the array
	{
		sum += table_results[count];
	}

	average = sum / MAX_NUMBERS;

	std::cout << "\nLargest number: " << table_results[position_Large] << " and it occurred " << large_Counter << "\n";
	std::cout << "Smallest number: " << table_results[position_Small] << " and it occurred " << small_Counter << "\n";
	std::cout << "The sum: " << sum << "\n";
	std::cout << "The average is: " << average << "\n";
}
