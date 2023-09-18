#pragma once
#include "LinkedList.h"
#include "Profile.h"

using std::cin;
using std::cout;
using std::endl;

void loadCommands(ifstream& infile, LinkedList<string> list);

void displayMenu();
int getChoice();
void exit();
void printRules();

string getName();
int getNumber();
void playGame(LinkedList<string> list, ofstream outfile);