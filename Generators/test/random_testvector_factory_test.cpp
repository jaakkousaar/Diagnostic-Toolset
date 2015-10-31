#include <iostream>

#include "../include/random_testvector_factory.h"
#include "../../libs/gtest-1.7.0/include/gtest/gtest.h"


using namespace generators;

TEST(generators2_test, RandomBitGeneratorTest)
{
	//generators::RandomTestSetFactory<1,unsigned> rtsf( 4, 5 );
	//for (auto i = 0; i < 10; ++i)
	//{
	//	cout <<
	//}
	//
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke
}