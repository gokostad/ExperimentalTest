/*
 * TestClass.h
 *
 *  Created on: Dec 4, 2013
 *      Author: goran
 */

#ifndef TESTCLASS_H_
#define TESTCLASS_H_

#include <gtest/gtest.h>

#define TEST_ARRAY_SIZE 10
#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))

class TestClass : public ::testing::Test
{
public:

protected:
	TestClass();
	~TestClass();

	virtual void SetUp();
	virtual void TearDown();

protected:
	int a[TEST_ARRAY_SIZE], b[TEST_ARRAY_SIZE];
};


#endif /* TESTCLASS_H_ */
