#include <gtest/gtest.h>
#include "../src/classes.h"

#include <vector>

TEST(SOI_Vector, push) {
    SOI_Vector svect;
	svect.push(3);
	svect.push(4);
	svect.push(5);
    EXPECT_EQ(0,svect.isEmpty());
}

TEST(SOI_Vector, push_and_pop) {
    SOI_Vector svect;
	svect.push(3);
	svect.push(4);
	svect.pop();
	svect.pop();
    EXPECT_EQ(1,svect.isEmpty());
}

TEST(SOI_Vector, size) {
    SOI_Vector svect;
	svect.push(3);
	svect.push(4);
	svect.push(3);
	svect.push(4);
	svect.push(3);
	svect.push(4);	
    EXPECT_EQ(6,svect.size());
}

TEST(SOI_Array, size) {
    SOI_Array arr(5);
	arr.push(5);
	arr.push(4);
    EXPECT_EQ(2,arr.size());
}

TEST(SOI_Array, isEmpty) {
    SOI_Array arr2(5);
	arr2.push(5);
	arr2.push(4);
    EXPECT_EQ(0,arr2.isEmpty());
}

TEST(SOI_Array, push_and_pop) {
    SOI_Array arr3(5);
	arr3.push(5);
	arr3.push(4);
	arr3.pop();
	arr3.pop();
    EXPECT_EQ(1,arr3.isEmpty());
}

TEST(SOI_Array, push_and_peek) {
    SOI_Array arr4(5);
	arr4.push(5);
	arr4.push(4);
	arr4.push(5);
	arr4.push(4);
    EXPECT_EQ(4,arr4.peek());
}

TEST(QOI_Queue, enqueue_peek) {
	QOI_Queue q1;
	q1.enqueue(3);
	q1.enqueue(4);
	EXPECT_EQ(3, q1.peek());
}

TEST(QOI_Queue, dequeue) {
	QOI_Queue q2;
	q2.enqueue(3);
	q2.enqueue(4);
	q2.dequeue();
	q2.dequeue();
	EXPECT_TRUE(q2.isEmpty());
}

TEST(QOI_Deque, dequeue) {
	QOI_Deque d1;
	d1.enqueue(3);
	d1.enqueue(4);
	d1.dequeue();
	d1.dequeue();
	EXPECT_TRUE(d1.isEmpty());
}

TEST(QOI_Deque, enqueue_peek) {
	QOI_Queue d2;
	d2.enqueue(6);
	d2.enqueue(7);
	EXPECT_EQ(6, d2.peek());
}
