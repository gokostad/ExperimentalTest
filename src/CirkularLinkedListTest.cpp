#include <gtest/gtest.h>
#include "CirkularLinkedList.h"

TEST(CirkularLinkedListTest, Acyclic)
{
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	EXPECT_FALSE(isCircular(&ll[0]));
	EXPECT_FALSE(isCircular1(&ll[0]));
	EXPECT_FALSE(isCircular2(&ll[0]));
}


TEST(CirkularLinkedListTest, CyclicEvenFull) {
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	ll[3].next = &ll[0];
	EXPECT_TRUE(isCircular(&ll[0]));
	EXPECT_TRUE(isCircular1(&ll[0]));
	EXPECT_TRUE(isCircular2(&ll[0]));
}

TEST(CirkularLinkedListTest, CyclicOddFull) {
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	ll[3].next = &ll[4];
	ll[4].next = &ll[0];
	EXPECT_TRUE(isCircular(&ll[0]));
	EXPECT_TRUE(isCircular1(&ll[0]));
	EXPECT_TRUE(isCircular2(&ll[0]));
}

TEST(CirkularLinkedListTest, CyclicEvenPartDeep) {
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	ll[3].next = &ll[1];
	EXPECT_TRUE(isCircular(&ll[0]));
	EXPECT_TRUE(isCircular1(&ll[0]));
	EXPECT_TRUE(isCircular2(&ll[0]));
}

TEST(CirkularLinkedListTest, CyclicOddPartDeep) {
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	ll[3].next = &ll[4];
	ll[4].next = &ll[2];
	EXPECT_TRUE(isCircular(&ll[0]));
	EXPECT_TRUE(isCircular1(&ll[0]));
	EXPECT_TRUE(isCircular2(&ll[0]));
}

TEST(CirkularLinkedListTest, CyclicEvenPartShallow) {
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	ll[3].next = &ll[2];
	EXPECT_TRUE(isCircular(&ll[0]));
	EXPECT_TRUE(isCircular1(&ll[0]));
	EXPECT_TRUE(isCircular2(&ll[0]));
}

TEST(CirkularLinkedListTest, CyclicOddPartShallow) {
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	ll[3].next = &ll[4];
	ll[4].next = &ll[3];
	EXPECT_TRUE(isCircular(&ll[0]));
	EXPECT_TRUE(isCircular1(&ll[0]));
	EXPECT_TRUE(isCircular2(&ll[0]));
}

TEST(CirkularLinkedListTest, CyclicEvenPartZeroShallow) {
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	ll[3].next = &ll[3];
	EXPECT_TRUE(isCircular(&ll[0]));
	EXPECT_TRUE(isCircular1(&ll[0]));
	EXPECT_TRUE(isCircular2(&ll[0]));
}

TEST(CirkularLinkedListTest, CyclicOddPartZeroShallow) {
	LLNode ll[] = {{1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}};
	ll[0].next = &ll[1];
	ll[1].next = &ll[2];
	ll[2].next = &ll[3];
	ll[3].next = &ll[4];
	ll[4].next = &ll[4];
	EXPECT_TRUE(isCircular(&ll[0]));
	EXPECT_TRUE(isCircular1(&ll[0]));
	EXPECT_TRUE(isCircular2(&ll[0]));
}
