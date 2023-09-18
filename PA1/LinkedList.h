#pragma once

#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::strtok;
using std::getline;
using std::ios;
using std::fstream;


template <typename T> class Node
{
public:
	Node();
private:
	T command;
	T description;
	Node* pNext;
	template<typename U>friend class LinkedList;
};

template <typename T> class LinkedList
{
public:
	LinkedList();
	void addNode(T newCom, T newDes);
private:
	Node<T>* pHead;
};