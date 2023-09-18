#include "Game.h"

void loadCommands(ifstream& infile, LinkedList<string> list)
{
	string command;
	string description;
	char* line;
	while (!infile.eof())
	{
		/*getline(infile, line);
		command = strtok(line, ",");
		description = strtok(line, "\n");*/
		getline(infile, command, ',');
		getline(infile, description, '\n');
		//list.addNode(command, description);
	}
}

void displayMenu()
{
	cout << "1. Game Rules" << endl;
	cout << "2. Play Game" << endl;
	cout << "3. Load Previous Game" << endl;
	cout << "4. Add Command" << endl;
	cout << "5. Remove Command" << endl;
	cout << "6. Exit" << endl;
}
int getChoice()
{
	int choice = 0;
	cin >> choice;
	return choice;
}
void exit()
{
	system("cls");
	cout << "Program has exited nicely!" << endl;
}

void printRules()
{
	system("cls");
	cout << "The objective of the game is to match Linux commands to appropriate descriptions of those commands." << endl;
	cout << "If a command is matched, then the player earns 1 point." << endl;
	cout << "If the command is not matched, then the player loses a point." << endl;
	cout << "Negative point totals are possible." << endl; 
	cout << "The player selects the number of match questions at the beginning of the game." << endl;
	cout << "The game continues until the number is reached." << endl;
	cout << "Each playerfs profile may be saved." << endl << endl;
}

string getName()
{
	string name = "";
	cout << "Enter player name: " << endl;
	cin >> name;
	return name;
}

int getNumber()
{
	int num = 0;
	do
	{
		cout << "Enter number of commands to generate: (5 to 30)" << endl;
		cin >> num;
		if (num < 5 || num > 30)
			cout << "Invalid number of commands!" << endl;
	} while (num < 5 || num > 30);
	return num;
}

void playGame(LinkedList<string> list, ofstream outfile)
{
	
	int guess = 0, points = 0;
	for (int i = 0; i < num; i++)
	{
		int index = (rand() % 30) + 1
		cout << LinkedList[index].command << endl;
		cout << LinkedList[index].description << endl;

		if (guess == index)
		{
			++points;
			cout << "Correct!" << LinkedList[index].command << LinkedList[index].description << endl;
		}
		else
		{
			--points;
			cout << "Incorrect!" << LinkedList[index].command << LinkedList[index].description << endl;

		}
	}
	
}

