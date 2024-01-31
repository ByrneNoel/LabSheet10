// Noel Byrne
// C00299761
// 22/01/24
// Approx Time-Taken: 40  mins
// The program declares an array of 10 integers,
// It then fills the array with 10 random numbers in the range 8-22
// Known Bugs:

#include <iostream>
#include <cstdlib>
#include <ctime>

int main1()
{
	const int MAX_NUMBERS = 10;
	int table_results[MAX_NUMBERS];
	

	srand(time(nullptr));

	for (int count = 0; count < MAX_NUMBERS; count++)
	{
		table_results[count] = (rand() % 15) + 8;  // assigns random number to index 0-9
	}
		

	for (int count = 0; count < MAX_NUMBERS; count++)
	{
		std::cout << table_results[count] << " ";
	}
	
	std::cout << std::endl;

	for (int count = MAX_NUMBERS - 1; count >= 0; count--)
	{
		std::cout << table_results[count] << " ";		// displays numbers in reverse
	}

	std::cout << std::endl;

	for (int count = 0; count < MAX_NUMBERS; count += 2)
	{
		std::cout << table_results[count] << " ";		//displays every 2nd number
	}

	






	system("Pause");
	return 1;

}