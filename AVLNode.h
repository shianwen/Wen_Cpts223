#pragma once

#include <iostream>

template <class T>
class AVLNode
{
public:
	AVLNode(T& newData) : data(newData), leftPtr(NULL), rightPtr(NULL) {}
	~AVLNode() {}

	T& getData() { return data; }
	AVLNode* getLeft() { return leftPtr; }
	AVLNode* getRight() { return rightPtr; }
	int getNodeHeight() { return nodeHeight; }

	void setLeft(AVLNode* newLeft) { leftPtr = newLeft; }
	void setRight(AVLNode* newRight) { rightPtr = newRight; }

private:
	AVLNode();

	T data;
	AVLNode* leftPtr;
	AVLNode* rightPtr;
	int nodeHeight;
};