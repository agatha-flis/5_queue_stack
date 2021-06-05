#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <vector>
#include <deque>
#include <queue>

class StackOfInts
{
public:
	virtual int pop() = 0; // removes the top element on the stack, decrementing its size by one
	virtual void push(int x) = 0; // inserts a new element at the top of the stack
	virtual bool isEmpty() = 0; // returns true if the stack is empty
	virtual int size() = 0; // returns the count of elements present in the stack
	virtual int peek() const = 0; // returns the count of elements present in the stack without modifying the stack
	virtual ~StackOfInts() {}
};

class QueueOfInts
{
public:
	virtual void enqueue(int x) = 0; // inserts a new element at the rear of the queue
	virtual int dequeue() = 0; // removes the front element of the queue
	virtual bool isEmpty() = 0; // checks if the queue is empty
	virtual int peek() const = 0; // returns the front element present in the queue without dequeuing it
	virtual ~QueueOfInts() {}
};

class SOI_Queue : public StackOfInts
{
public:
	int pop(); // removes the top element on the stack, decrementing its size by one
	void push(int x); // inserts a new element at the top of the stack
	bool isEmpty(); // returns true if the stack is empty
	int size(); // returns the count of elements present in the stack
	int peek() const; // returns the count of elements present in the stack without modifying the stack
	~SOI_Queue() {}
private:
	std::vector <int> a;
};

class SOI_Array : public StackOfInts
{
public:
	//konstruktor obiektu
	SOI_Array(int s)
	{
		capacity = s;
		arr = new int[s];
		top = -1;
	}
	~SOI_Array() {}

	int pop(); // removes the top element on the stack, decrementing its size by one
	void push(int x); // inserts a new element at the top of the stack
	bool isEmpty(); // returns true if the stack is empty
	int size(); // returns the count of elements present in the stack
	int peek() const; // returns the count of elements present in the stack without modifying the stack

private:
	int* arr;
	int top;
	int capacity;
};

class QOI_Queue : public QueueOfInts
{
public:
	void enqueue(int x); // inserts a new element at the rear of the queue
	int dequeue(); // removes the front element of the queue
	bool isEmpty(); // checks if the queue is empty
	int peek() const; // returns the front element present in the queue without dequeuing it
	~QOI_Queue() {}

private:
	std::queue<int> q;
};

class QOI_Deque : public QueueOfInts
{

private:
	std::deque<int> d;

public:

	void enqueue(int x); // inserts a new element at the rear of the queue
	int dequeue(); // removes the front element of the queue
	bool isEmpty(); // checks if the queue is empty
	int peek() const; // returns the front element present in the queue without dequeuing it
	~QOI_Deque() {}

};

#endif // !CLASSES_H

