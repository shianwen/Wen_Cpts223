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
