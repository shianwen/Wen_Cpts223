#pragma once

#include "LinkedList.h"
class profile
{
public:
	void setName(string newName);
	void setPoints(int newPoints);
private:
	string name;
	int pointTotal;
};