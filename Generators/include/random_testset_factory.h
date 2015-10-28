// random_testset_factory.h : header file
// Created by Jaak Kõusaar @10.2015

#include <vector>
#include <memory>
#include <time.h>

namespace generators
{
class RandomTestSetFactory
{

public:
	static std::unique_ptr< const std::vector< std::vector< char > > > CreateSet
		(
		unsigned vector_count,
		unsigned first_fragment,
		unsigned second_fragment
		);
	
private:

};
	
}