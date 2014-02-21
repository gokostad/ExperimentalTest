/*
 * TestClass.cpp
 *
 *  Created on: Dec 4, 2013
 *      Author: goran
 */
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <limits>
using namespace std;

#include "TestClass.h"
#include "BitwiseSwap.h"

TestClass::TestClass()
{
	cout << "TestClass::TestClass" << endl;
}

TestClass::~TestClass()
{
	cout << "TestClass::~TestClass" << endl;
}

void TestClass::SetUp()
{
	cout << "TestClass::Setup" << endl;

	ASSERT_EQ(ARRAY_SIZE(a), ARRAY_SIZE(b));

	/* initialize random seed: */
	srand (time(NULL));

	for (unsigned int i = 0; i < ARRAY_SIZE(a); i++)
	{
		a[i] = rand();
		b[i] = rand();

		if ( i % 2 == 0 )
			a[i] = -a[i];
	}
}

void TestClass::TearDown()
{
	cout << "TestClass::TearDown" << endl;
}

TEST_F(TestClass, Swapping)
{
	cout << "TEST_F(TestClass, Swapping)" << endl;
	int at, bt;

	for (unsigned int i = 0; i < ARRAY_SIZE(a); i++)
	{
		at = a[i];
		bt = b[i];

		bitwiseSwap(&(a[i]), &b[i]);

		EXPECT_EQ(at, b[i]);
		EXPECT_EQ(bt, a[i]);
	}
}

TEST_F(TestClass, Swapping1)
{
	cout << "TEST_F(TestClass, Swapping1)" << endl;
	int at, bt;

	for (unsigned int i = 0; i < ARRAY_SIZE(a); i++)
	{
		at = a[i];
		bt = b[i];

		bitwiseSwap(&(a[i]), &b[i]);

		cout << at << bt << endl;
		EXPECT_EQ(at, b[i]);
		EXPECT_EQ(bt, a[i]);
	}
}


