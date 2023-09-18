//ADVANTAGES / DISADVANTAGES LINKED LIST
//1 Advantage is that adding to the beginning of a linked list is easier and more efficient than adding to
//the beginning of an array
//1 Disadvantage is that random access using a linked list is harder to do than with an array

//ADVANTAGES / DISADVANTAGES ARRAY
//1 Advantage is that its easier to add items to the end of an array than it is with a linked list
//1 Disadvantage is that the size of the array has to be predermined, which can cause wasted memory or
//not enough space


#include "Game.h"




int main(void)
{
	int choice = 0;

	string name = "";
	int num = 0, points = 0;

	string command;
	string description;

	profile player;

	fstream commandsFile;
	commandsFile.open("commands.csv", ios::in);
	LinkedList<string> list();

	ofstream profilesFile;
	profilesFile.open("profiles.csv", ios::out);

	//loadCommands(commandsFile, list());

	do
	{
		do
		{
			displayMenu();
			choice = getChoice();
			if (choice < 1 || choice > 6)
				cout << "Invalid input!" << endl;
		} while (choice < 1 || choice > 6);
		switch (choice)
		{
		case 1:
			printRules();
			break;
		case 2:
			string name;
			name = getName();
			int num = 0;
			num = getNumber();
			/*name = getName();
			cout << "Name: " << name << endl;
			num = getNumber();
			cout << "Num: " << num << endl;*/
			playGame(list(), profilesFile);
			break;
		case 3:
			if (player->name == name)
			{
				playGame(player, profilesFile);
			}
			break;
		case 4:
			cout << "Enter command to add: " << endl;
			cin >> command;
			cout << "Enter description: " << endl;
			cin >> description;
			break;
		case 5:
			cout << "Enter command to remove: " << endl;
			cin >> command;
			list.removeNode(command);
		case 6:
			exit();
			player.setName(name);
			player.setPoints(points);
			profilesFile << name << ", " << points << endl;
			commandsFile << command << ", " << description;
			break;
		}
		
		
	} while (choice != 6);

	commandsFile.close();

	return 0;
}

