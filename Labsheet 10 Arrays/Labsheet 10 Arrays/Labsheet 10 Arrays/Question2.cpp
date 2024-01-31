// Noel Byrne
// C00299761
// 22/01/24
// Approx Time-Taken: 15 mins
// The program declares an array of 9 floats.
// It then calculates and displays the number of odd and even numbers within the array. 
// Known Bugs:

#include <iostream>

int main2()
{
	const int MAX_NUMBERS = 9;
	float table_results[MAX_NUMBERS];
	int num1 = 0;
	int even_Counter = 0;
	int odd_Counter = 0;

	std::cout << "Enter 9 numbers\n";

	for (int count = 0; count < MAX_NUMBERS; count++)
	{
		std::cin >> num1;
		table_results[count] =  num1;  // assigns number to index



		if (num1 % 2 == 0)
		{
			even_Counter++;   // tracks how many even numbers
		}

		else
		{
			odd_Counter++;
		}
		
	}


	for (int count = 0; count < MAX_NUMBERS; count++)
	{
		std::cout << table_results[count] << " ";		// displays numbers entered
	}

	std::cout << "\nOdd numbers = " << odd_Counter;
	std::cout << "\nEven numbers = " << even_Counter;
	


	system("Pause");
	return 1;
}