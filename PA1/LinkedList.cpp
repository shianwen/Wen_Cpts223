#include "LinkedList.h"

template <typename T> Node<T>::Node()
{
	this->pNext = NULL;
}

template <typename T> LinkedList<T>::LinkedList()
{
	this->pHead = NULL;
}

template <typename T> void LinkedList<T>::addNode(T newCom, T newDes)
{
	Node<T>* node = new Node<T>;
	node->command = newCom;
	node->description = newDes;
	if (pHead == NULL)
	{
		pHead = node;
	}
	node->pNext = pHead;
	pHead = node;
}