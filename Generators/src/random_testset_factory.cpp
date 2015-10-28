// random_testset_factory.cpp : implementation file
// Created by Jaak Kõusaar @10.2015

#include "../include/random_testset_factory.h"
#include "../include/random_testvector_factory.h"

using namespace generators;
using std::vector;
using std::make_unique;
using std::move;

static std::unique_ptr< const std::vector< std::vector< char > > > CreateSet
	(
	unsigned vector_count,
	unsigned first_fragment,
	unsigned second_fragment
	)
{
	auto testset_ptr = make_unique< vector< vector< char > > >();

	for (int i = 0; i < vector_count; ++i)
		testset_ptr->emplace_back(*RandomTestVectorFactory::CreateVector(first_fragment, second_fragment));

	return move(testset_ptr);
};


// random_testset_factory.cpp

