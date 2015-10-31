// random_testset_factory.h : header file
// Created by Jaak Kõusaar @10.2015

#ifndef GENERATORS_RANDOM_TESTSET_FACTORY_H_
#define GENERATORS_RANDOM_TESTSET_FACTORY_H_

#include <vector>
#include <memory>
#include <time.h>

namespace generators
{
class RandomTestSetFactory
{

public:
	static std::unique_ptr< std::vector< std::vector< char > > > CreateSet
		(
		unsigned vector_count,
		unsigned first_fragment,
		unsigned second_fragment
		);
	
private:
	
};
	




}
#endif // GENERATORS_RANDOM_TESTSET_FACTORY_H_