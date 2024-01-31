// Noel Byrne
// C00299761
// 24/01/24
// Approx Time-Taken: to long 
// --------------------------------------------------
//
// --------------------------------------------------
// Known Bugs:

#include <iostream>
#include <string>

void initializeArrays();
int calculateSum();
float calculateAvg();
void displayPlayers();
void displayReversePlayers();
void findHighestHealth();
void findLowestHealh();

// The following variables are GLOBAL variables
const int MAX_PLAYERS = 8;	// maximum number of players
int noOfPlayers = 8;	// the number of active players 
std::string namesArray[MAX_PLAYERS];
int healthArray[MAX_PLAYERS];


int main5()
{
	int sum = 0;
	float average = 0;

	initializeArrays();
	sum = calculateSum();
	average = calculateAvg();

	std::cout << "The sum of the health is " << sum << "\n";
	std::cout << "The average of the health is " << average << "\n\n";

	displayPlayers();
	displayReversePlayers();
	findHighestHealth();
	findLowestHealh();





	system("Pause");
	return 1;
}

void initializeArrays()
// Initialize the two arrays
{
	namesArray[0] = "Tom";
	namesArray[1] = "Sam";
	namesArray[2] = "Ann";
	namesArray[3] = "Ki";
	namesArray[4] = "Joe";
	namesArray[5] = "Ray";
	namesArray[6] = "Dave";
	namesArray[7] = "Sue";

	healthArray[0] = 3;
	healthArray[1] = 6;
	healthArray[2] = 2;
	healthArray[3] = 1;
	healthArray[4] = 4;
	healthArray[5] = 6;
	healthArray[6] = 1;
	healthArray[7] = 6;
}

int calculateSum()
{
	int sum = 0;

	for (int i = 0; i < MAX_PLAYERS; i++)
	{
		sum = sum + healthArray[i];
	}
	
	return sum;
}

float calculateAvg()
{
	float average = 0.0f;
	float sum = 0.0f;

	sum = calculateSum();

	average = sum / MAX_PLAYERS;
	
	
	return average;
}

void displayPlayers()
{
	for (int i = 0; i < MAX_PLAYERS; i++)
	{
		std::cout << namesArray[i] << " has a health of " << healthArray[i] << "\n";
	}
	
	std::cout << std::endl;
}

void displayReversePlayers()
{
	for (int index = 7; index >= 0; index--)
	{
		std::cout << namesArray[index] << " has a health of " << healthArray[index] << "\n";
	}
}

void findHighestHealth()
{
	int health = 0;
	std::string name = "";
	std::string message = "";


	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		if (healthArray[index] >= health)
		{
			health = healthArray[index];
			message = namesArray[index] + " has the highest health of " + std::to_string(healthArray[index]);

		}
	}

	std::cout << std::endl;
	std::cout << message << "\n";

}

void findLowestHealh()
{
	int health = healthArray[0];
	std::string message = "";
	std::string name = "";

	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		if (healthArray[index] < health)
		{
			health = healthArray[index];
			message = namesArray[index] + " has the lowest health of " + std::to_string(healthArray[index]);

		}

		
	}
	std::cout << std::endl;
	std::cout << message << "\n";



}







