#pragma once

#include "AVLNode.h"

template <class T>
class AVLTree
{
public:
	AVLTree() : rootPtr(NULL) {}
	~AVLTree() {}

	int getTreeHeight(AVLNode<T>* rootPtr);
	int insert(T& data);
	int contains(T& data);
	int validate(AVLNode<T>* rootPtr);

	void insertHelper(AVLNode<T>* rootPtr, AVLNode<T>* newNode);

private:
	AVLNode* rootPtr;
};

template <class T>
int AVLTree<T>::insert(T& data)
{
	AVLNode<T>* pMem = AVLNode<T>(data);
	if (!pMem)
	{
		return 1;
	}
	if (!rootPtr)
	{
		rootPtr = pMem;
	}
	else
	{
		insertHelper(rootPtr, pMem);
	}
	return 0;
}

template <class T>
void AVLTree<T>::insertHelper(AVLNode<T>* rootPtr, AVLNode<T>* newNode)
{
	if (newNode->getData() <= rootPtr->getData())
	{
		if (rootPtr->getLeft())
		{
			insertHelper(rootPtr->getLeft(), newNode);
		}
		else
		{
			rootPtr->setLeft(newNode);
		}
	}
	else
	{
		if (rootPtr->getRight())
		{
			insertHelper(rootPtr->getRight(), newNode);
		}
		else
		{
			rootPtr->setRight(newNode);
		}
	}
}

template <class T>
int AVLTree<T>::contains(T& data)
{
	if (rootPtr->getLeft() == data)
	{
		return 1;
	}
	else if (rootPtr->getRight() == data)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}