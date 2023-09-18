/**
1. Not having a separate cpp file for the queue functions for better organization
2. Using an array instead of a linked list for queues (arrays need a predermined size)
3. Algorithm isn't very efficient when removing item from front of queue
4. The destructor deletes the array directly instead of deleting each item 1 by 1
5. Using namespace std (could cause overlap with variables with same names from different libraries)
**/
#include <iostream>
#include <cstdlib>
#include "queue.h"
#include "testQueue.h"
using namespace std;

#define SIZE 10
/**
class queue
{
	int* arr;
	int capacity;
	int front;
	int rear;
	int count;
	
	public:
	queue(int size = SIZE);
	~queue();

	void dequeue();
	void enqueue(int x);
	int peek();
	int size();
	bool isEmpty();
	bool isFull();
}
**/
queue::queue(int size)
{
	arr = new int[size];
	capacity = size;
	front = 0;
	rear = -1;
	count = 0;
}

queue::~queue()
{
	delete arr;
}

void queue::dequeue()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		return;
	}
	cout << "Removing " << arr[front] << '\n';
	front = (front + 1) % capacity;
	count--;
}

void queue::enqueue(int item)
{
	if (isFull())
	{
		cout << "OverFlow\nProgram Terminated\n";
		return;
	}

	cout << "Inserting " << item << '\n';

	rear = (rear + 1) % capacity;
	arr[rear] = size();
	count++;
}

int queue::peek()
{
	if (isEmpty())
	{
		cout << "UnderFlow\nProgram Terminated\n";
		return numeric_limits<int>::min();
	}
	return arr[rear];
}

int queue::size()
{
	return count + 1;
}

bool queue::isEmpty()
{
	return (size() == 0);
}

bool queue::isFull()
{
	return (size()-1 == capacity);
}

int main()
{
	testSize();
	testIsEmpty();
	testIsFull();
	testDequeue();
	testDequeueEmpty();
	testEnqueue();
	testEnqueueFull();
	testPeek();
	testPeekEmpty();
	return 0;
}
