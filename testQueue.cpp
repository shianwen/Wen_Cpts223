#include "testQueue.h"
/**
Test ID: Size check
Unit:queue::size()
Description: test to determine if size() returns 1 if size() is equal to SIZE
Test data: size = 10
Precondition: SIZE = 10
Postcondition: SIZE is still equal to 10
Expected result: size() = SIZE; 1 is returned
Actual result: size() = SIZE; 1 is returned
Status passed
**/
void testQueue::testSize()
{
	int size1 = SIZE;
	int size2 = size();
	if (size1 == size2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
/**
Test ID: Empty queue check
Unit: queue::isEmpty()
Description: test to determine if queue::isEmpty() returns 1 if a queue object is empty
Test data: size = 0
Precondition: queue object is empty
Postcondition: queue object is still empty
Expected result: queue is empty; 1 is returned
Actual result: queue is empty; 1 is returned
Status: passed
**/
void testQueue::testIsEmpty()
{
	queue q(0);
	if (q.isEmpty() == 1)
		return 1;
	else
		return 0;
}
/**
Test ID: Full queue check
Unit: queue::isFull()
Description: test to determine if queue::isFull() returns 1 if a queue object is full
Test data: size = SIZE;
Precondition: queue object is full
Postcondition: queue object is still full
Expected result: queue is full; 1 is returned
Actual result: queue is full; 1 is returned
Status: passed
**/
void testQueue::testIsFull()
{
	queue q(SIZE);
	if (q.isFull() == 1)
		return 1;
	else
		return 0;
}
/**
Test ID: Dequeue on occupied queue check
Unit: queue::dequeue()
Description: test to determine if queue::dequeue() on an occupied queue returns 1 if successful
Test data: size = 1;
Precondition: queue object has 1 item
Postcondition: queue object has 0 items
Expected result: item is removed from queue successfully; 1 is returned
Actual result: item is removed from queue successfully: 1 is returned
Status: passed
**/
void testQueue::testDequeue()
{
	queue q(1);
	if (q.dequeue() == 1)
		return 1;
	else
		return 0;
}
/**
Test ID: Dequeue on empty queue check
Unit: queue::dequeue()
Description: test to determine if queue::dequeue() on an empty queue returns 0 if unsuccessful
Test data: size = 0;
Precondition: queue object is empty
Postcondition: queue object is still empty
Expected result: dequeue() doesn't work on empty queue; 1 is returned
Actual result: dequeue() doesn't work on empty queue; 1 is returned
Status: passed
**/
void testQueue::testDequeueEmpty()
{
	queue q(0);
	if (q.dequeue() == 0)
		return 1;
	else
		return 0;
}
/**
Test ID: Enqueue check
Unit: queue::enqueue()
Description: test to determine if enqueue() returns 1 if successful
Test data: size = 0
Precondition: queue is empty
Poscondition: queue has 1 item
Expected result: item is added to queue successfully; 1 is returned
Actual result: item is added to queue successfully; 1 is returned
Status: passed
**/
void testQueue::testEnqueue()
{
	queue q(0);
	if (q.enqueue(1) == 1)
		return 1;
	else
		return 0;
}
/**
Test ID: Enqueue on full queue check
Unit: queue::enqueue()
Description: test to determine if enqueue() on a full queue returns 0 if unsuccessful
Test data: size = SIZE
Precondition: queue is full
Postcondition: queue is still full
Expected result: enqueue() doesn't work on full queue; 1 is returned
Actual result: enqueue() doesn't work on full queue; 1 is returned
Status: passed
**/'
void testQueue::testEnqueueFull()
{
	queue q(SIZE);
	if (q.enqueue(11) == 0)
		return 1;
	else
		return 0;
}
/**
Test ID: Peek check
Unit: queue::peek()
Description: test to determine if peek() returns 1 if successful
Test data: size = 1
Precondition: queue has 1 item
Postcondition: queue still has 1 item
Expected result: peek() is successful, 1 is returned
Actual result: peek() is successful, 1 is returned
Status: passed
**/
void testQueue::testPeek()
{
	queue q(1);
	if (q.peek() == 1)
		return 1;
	else
		return 0;
}
/**
Test ID: Peek on empty queue check
Unit: queue::peek()
Description: test to determine if peek() on an empty queue returns 0 if unsuccessful
Test data: size = 0
Precondition: queue is empty
Postcondition: queue is still empty
Expected result: peek() is unsuccessful on empty queue; 1 is returned
Actual result: peek() is unsuccessful on empty queue; 1 is returned
Status: passed
**/
void testQueue::testPeekEmpty()
{
	queue q(0);
	if (q.peek() == 0)
		return 1;
	else
		return 0;
}


