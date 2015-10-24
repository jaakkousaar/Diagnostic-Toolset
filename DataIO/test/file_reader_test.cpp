#include <iostream>

#include "../../libs/gtest-1.7.0/include/gtest/gtest.h"
#include "../include/file_reader.h"

using namespace dataio;

TEST(DataIO_test, fileReaderConstructorTest) 
{
	dataio::FileReader fr("name");
	EXPECT_EQ("name", fr.GetName());
}

int main(int argc, char** argv)
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	std::getchar(); // keep console window open until Return keystroke
}