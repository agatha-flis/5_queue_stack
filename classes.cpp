#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include "classes.h"

int SOI_Queue::pop() // removes the top element on the stack, decrementing its size by one
{
	if (isEmpty() == true)
		return false;
	else
	{
		a.pop_back();
		return true;
	}
}

void SOI_Queue::push(int x) // inserts a new element at the top of the stack
{
	a.push_back(x);
}

bool SOI_Queue::isEmpty() // returns true if the stack is empty
{
	return a.size() == 0;
}

int SOI_Queue::size() // returns the count of elements present in the stack
{
	return a.size();
}

int SOI_Queue::peek() const // returns the count of elements present in the stack without modifying the stack
{
	if (a.size() != 0)
		return a.back();
	else {
		std::cout << "stos jest pusty" << std::endl;
		return 0;
	}
}


int SOI_Array::pop() // removes the top element on the stack, decrementing its size by one
{
	if (isEmpty() == true)
		return false;
	else
		return arr[top--];
}

void SOI_Array::push(int x) // inserts a new element at the top of the stack
{
	arr[++top] = x;
}

bool SOI_Array::isEmpty() // returns true if the stack is empty
{
	return size() == 0;
}

int SOI_Array::size() // returns the count of elements present in the stack
{
	return top + 1;
}

int SOI_Array::peek() const // returns the count of elements present in the stack without modifying the stack
{
	return arr[top];
}


void QOI_Queue::enqueue(int x) // inserts a new element at the rear of the queue
{
	q.push(x);
}

int QOI_Queue::dequeue() // removes the front element of the queue
{
	if (q.empty() == 0)
	{
		q.pop();
		return true;
	}
	else
	{
		std::cout << "kolejka jest pusta" << std::endl;
		return 0;
	}
}

bool QOI_Queue::isEmpty() // checks if the queue is empty
{
	if (q.size() == 0)
		return true;
	else
		return false;
}

int QOI_Queue::peek() const // returns the front element present in the queue without dequeuing it
{
	if (q.size() != 0)
	{
		return q.front();
		return 0;
	}
	else {
		std::cout << "kolejka jest pusta" << std::endl;
		return 0;
	}
}


void QOI_Deque::enqueue(int x) // inserts a new element at the rear of the queue
{
	d.push_back(x);
}

int QOI_Deque::dequeue() // removes the front element of the queue
{
	if (d.empty() == 0)
	{
		d.pop_front();
		return true;
	}
	else
	{
		std::cout << "kolejka jest pusta" << std::endl;
		return 0;
	}

}

bool QOI_Deque::isEmpty() // checks if the queue is empty
{
	return d.empty();
}

int QOI_Deque::peek() const // returns the front element present in the queue without dequeuing it
{
	if (d.empty() == 0)
		return d.front();
	else {
		std::cout << "kolejka jest pusta" << std::endl;
		return 0;
	}
}

