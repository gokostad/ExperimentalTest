/*
 * ReverseLinkedListTest.cpp
 *
 *  Created on: Feb 20, 2014
 *      Author: goran
 */

#include <gtest/gtest.h>
#include "ReverseLinkedList.h"

TEST(ReverseLinkedListTest, Null)
{
	EXPECT_EQ(0, reverseLL(0));
}

TEST(ReverseLinkedListTest, OneElement)
{
	LLNode ll[] = {{1, 0}};

	EXPECT_EQ(&ll[0], reverseLL(&ll[0]));
}

TEST(ReverseLinkedListTest, ManyElements)
{
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];

	EXPECT_EQ(&ll[3], reverseLL(&ll[0]));

	EXPECT_EQ(&ll[2], ll[3].next);
	EXPECT_EQ(&ll[1], ll[2].next);
	EXPECT_EQ(&ll[0], ll[1].next);
	EXPECT_EQ(    0,  ll[0].next);
}




TEST(ReverseLinkedListWithRecursionTest, Null)
{
	EXPECT_EQ(0, reverseLLwithRecursion(0));
}

TEST(ReverseLinkedListWithRecursionTest, OneElement)
{
	LLNode ll[] = {{1, 0}};

	EXPECT_EQ(&ll[0], reverseLLwithRecursion(&ll[0]));
}

TEST(ReverseLinkedListWithRecursionTest, ManyElements)
{
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];

	EXPECT_EQ(&ll[3], reverseLLwithRecursion(&ll[0]));

	EXPECT_EQ(&ll[2], ll[3].next);
	EXPECT_EQ(&ll[1], ll[2].next);
	EXPECT_EQ(&ll[0], ll[1].next);
	EXPECT_EQ(    0,  ll[0].next);
}
