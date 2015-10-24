#include <iostream>

#include "../../libs/gtest-1.7.0/include/gtest/gtest.h"
#include "../include/random_testset_factory.h"

using namespace generators;
//
//TEST(Generators_test, TestFragmentCountWith3Fragments)
//{
//	generators::RandomTestSetFactory<unsigned> vtgt( 3, 4, 5 );
//	EXPECT_EQ(3, vtgt.GetFragmentCount());
//}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke
}