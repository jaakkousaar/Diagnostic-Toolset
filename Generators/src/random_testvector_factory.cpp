// random_testvector_factory.cpp : implementation file
// Created by Jaak Kõusaar @10.2015

#include "../include/random_testvector_factory.h"

using namespace generators;
using std::unique_ptr;
using std::make_unique;
using std::vector;

unique_ptr< vector< char > > RandomTestVectorFactory::CreateVector
	(
	unsigned first_fragment,
	unsigned second_fragment
	)
{
	auto vector_length = first_fragment + second_fragment + END_OF_LINE;
	auto testvector_ptr =  make_unique< vector< char > >(vector_length, 0);

	for (int i = 0; i < vector_length; ++i)
		testvector_ptr->emplace_back(RandomTestVectorFactory::CreateRandomBit());
	testvector_ptr->emplace_back('\n');

   
	return move(testvector_ptr);
}

char RandomTestVectorFactory::CreateRandomBit()
{
	srand(time(NULL));
	return char( rand() % 2 ) + '0';
}