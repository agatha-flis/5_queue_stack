
#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include "classes.h"

int main()
{
	//Stack-Array
	std::cout << "metody Stack of Ints with Array" << std::endl;
	SOI_Array stack(5);
	stack.push(5);
	stack.push(4);

	//stack.pop();
	//stack.pop();
	stack.isEmpty();
	std::cout << stack.peek() << std::endl;
	std::cout << stack.size() << std::endl;
	std::cout << stack.isEmpty() << std::endl;

	//Stack-Vector
	std::cout << "metody Stack of Ints with Vector" << std::endl;
	SOI_Queue svect;
	svect.peek();
	svect.push(3);
	svect.push(4);
	svect.push(5);
	std::cout << svect.peek() << std::endl;

	//Queue-Deque
	std::cout << "metody Queue of Ints with Deque" << std::endl;
	QOI_Deque dqueue;
	dqueue.enqueue(2);
	dqueue.enqueue(3);
	dqueue.enqueue(4);
	dqueue.dequeue();
	dqueue.dequeue();
	dqueue.dequeue();
	dqueue.dequeue();

	std::cout << dqueue.isEmpty() << std::endl;
	std::cout << dqueue.peek() << std::endl;

	//Queue-Queue


	return 0;
}