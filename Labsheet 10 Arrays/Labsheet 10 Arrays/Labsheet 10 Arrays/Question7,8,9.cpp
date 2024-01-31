// Noel Byrne
// C00299761
// 29/01/24
// Approx Time-Taken: too long mins 
// --------------------------------------------------
//
// --------------------------------------------------
// Known Bugs:

#include <iostream>
#include <string>

void initializeArrays1();
int calculateSum1();
float calculateAvg1();
void displayPlayers1();
void displayReversePlayers1();
void findHighestHealth1();
void findLowestHealh1();
void findFirstHealthValue(int aValue);
void findAllHealthValue(int bValue);
int findLastName(std::string aName);
int changePlayerHealth(std::string t_aName);

// The following variables are GLOBAL variables
const int MAX_PLAYERS1 = 8;	// maximum number of players
int noOfPlayers1 = 8;	// the number of active players 
std::string namesArray1[MAX_PLAYERS1];
int healthArray1[MAX_PLAYERS1];
bool isFound = false;
bool isFound1 = false;

int main()
{
	int sum = 0;
	float average = 0;
	int aValue = 0;
	int bValue = 0;
	std::string aName = "";
	std::string t_aName = "";
	int pos = 0;
	int pos1 = 0;
	
	initializeArrays1();
	sum = calculateSum1();
	average = calculateAvg1();

	std::cout << "The sum of the health is " << sum << "\n";
	std::cout << "The average of the health is " << average << "\n\n";

	displayPlayers1();
	displayReversePlayers1();
	findHighestHealth1();
	findLowestHealh1();

	std::cout << std::endl;

	std::cout << "Enter a health value\n";
	std::cin >> aValue;

	findFirstHealthValue(aValue);
	std::cout << std::endl;

	std::cout << "Enter a health value\n";
	std::cin >> bValue;

	findAllHealthValue(bValue);
	std::cout << std::endl;

	std::cout << "Enter a name (case sensitive)\n";
	std::cin >> aName;
	pos = findLastName(aName);
	
	if (isFound == true)	// if name is in array output this
	{
		std::cout << "Name " << aName << " is at index position " << pos << " in the array\n";
	}

	else                    // if name is not in array
	{
		std::cout << "Name " << aName << " is not in the array, returns " << pos;
	}


	std::cout << "\nEnter a name (case sensitive)\n";
	std::cin >> t_aName;
	pos1 =changePlayerHealth(t_aName);


	if (isFound1 == true)	// if name is in array output this
	{
		std::cout << "Name " << t_aName << " is at index position " << pos1 << " in the array\n";
	}

	else                    // if name is not in array
	{
		std::cout << "Name " << t_aName << " is not in the array, returns " << pos1;
	}

	


	system("Pause");
	return 1;
}

void initializeArrays1()
// Initialize the two arrays
{
	namesArray1[0] = "Tom";
	namesArray1[1] = "Sam";
	namesArray1[2] = "Ann";
	namesArray1[3] = "Ki";
	namesArray1[4] = "Joe";
	namesArray1[5] = "Ray";
	namesArray1[6] = "Dave";
	namesArray1[7] = "Sue";

	healthArray1[0] = 3;
	healthArray1[1] = 6;
	healthArray1[2] = 2;
	healthArray1[3] = 1;
	healthArray1[4] = 4;
	healthArray1[5] = 6;
	healthArray1[6] = 1;
	healthArray1[7] = 6;
}

int calculateSum1()
{
	int sum = 0;

	for (int i = 0; i < MAX_PLAYERS1; i++)
	{
		sum = sum + healthArray1[i];
	}

	return sum;
}

float calculateAvg1()
{
	float average = 0.0f;
	float sum = 0.0f;

	sum = calculateSum1();

	average = sum / MAX_PLAYERS1;


	return average;
}

void displayPlayers1()
{
	for (int i = 0; i < MAX_PLAYERS1; i++)
	{
		std::cout << namesArray1[i] << " has a health of " << healthArray1[i] << "\n";
	}

	std::cout << std::endl;
}

void displayReversePlayers1()		// finding highest health (last person)
{
	for (int index = MAX_PLAYERS1 -1; index >= 0; index--)
	{
		std::cout << namesArray1[index] << " has a health of " << healthArray1[index] << "\n";
	}
}

void findHighestHealth1()
{
	int health = 0;
	std::string name = "";
	std::string message = "";


	for (int index = 0; index < MAX_PLAYERS1; index++)
	{
		if (healthArray1[index] >= health)
		{
			health = healthArray1[index];
			message = namesArray1[index] + " has the highest health of " + std::to_string(healthArray1[index]);

		}
	}

	std::cout << std::endl;
	std::cout << message << "\n";

}

void findLowestHealh1()
{
	int health = healthArray1[0];
	std::string message = "";
	std::string name = "";

	for (int index = 0; index < MAX_PLAYERS1; index++)
	{
		if (healthArray1[index] < health)
		{
			health = healthArray1[index];
			message = namesArray1[index] + " has the lowest health of " + std::to_string(healthArray1[index]);

		}


	}
	std::cout << std::endl;
	std::cout << message << "\n";



}

void findFirstHealthValue(int aValue)
{
	std::string message = "";
	bool isFound = false;

	for (int index = 0; index < MAX_PLAYERS1; index++)
	{
		if (aValue == healthArray1[index])
		{
			message += "Health value found at index poistion " + std::to_string(index);
			isFound = true;
			break;
		}
	}

	if (isFound == false)
	{
		message = "Health not found";
	}

	std::cout << message << "\n";


}

void findAllHealthValue(int bValue)
{
	std::string message = "";
	bool isFound = false;

	for (int index = 0; index < MAX_PLAYERS1; index++)
	{
		if (bValue == healthArray1[index])
		{
			message += namesArray1[index] + "\n";
			isFound = true;
			
		}
	}

	if (isFound == false)
	{
		message = "Health not found";
	}

	std::cout << message << "\n";

}

int findLastName(std::string aName)
{
	int pos = -1;
	int i = 0;
	

	for (i = MAX_PLAYERS1 - 1; i >= 0; i--)
	{
		if (aName == namesArray1[i])	// checking for last time the name appears 
		{
			pos = i;
			isFound = true;
			break;
		}

	}

	
	return pos;
}

int changePlayerHealth(std::string t_aName)
{
	int updatedHealth = 0;
	int i = 0;
	int pos1 = -1;
	bool isName = false;

	std::cout << "Enter a new health for the player\n";
	std::cin >> updatedHealth;

	for (i = MAX_PLAYERS1 - 1; i >= 0; i--)
	{
		if (t_aName == namesArray1[i])	// checking for last time the name appears 
		{
			pos1 = i;
			isFound1 = true;
			healthArray1[i] += updatedHealth;
			break;
		}

	}

	if (isName == true)
	{
		std::cout << "Name " << namesArray1[i] << " has updated health of " << healthArray1[i] << "\n";
	}

	else
	{
		std::cout << "Name " << t_aName << " does not exist\n ";

	}





	return pos1;
}


