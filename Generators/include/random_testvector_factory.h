// random_testvector_factory.h : header file
// Created by Jaak Kõusaar @10.2015

#include <vector>
#include <memory>
#include <time.h>

namespace generators
{
class RandomTestVectorFactory
{

public:
	static std::unique_ptr< std::vector< unsigned > > CreateVector
		(
		unsigned first_fragment,
		unsigned second_fragment
		);

private:
	static unsigned CreateRandomBit();



};

}