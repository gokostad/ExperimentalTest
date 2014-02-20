//============================================================================
// Name        : ExperimentalTest.cpp
// Author      : Goran Kostadinov
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <gtest/gtest.h>
using namespace std;

int main(int argc, char **argv)
{
	cout << "Running main() from ExperimentalTest.cpp" << endl;

	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}


