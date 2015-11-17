#include <iostream>

#include "../../libs/gtest-1.7.0/include/gtest/gtest.h"
#include "../include/random_testset_factory.h"

using namespace generators;

TEST(Generators_test, TestFragmentCountWith3Fragments)
{

}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke
}