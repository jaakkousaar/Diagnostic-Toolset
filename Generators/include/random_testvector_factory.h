// random_testvector_factory.h : header file
// Created by Jaak Kõusaar @10.2015

#ifndef GENERATORS_RANDOM_TESTVECTOR_FACTORY_H_
#define GENERATORS_RANDOM_TESTVECTOR_FACTORY_H_

#include <vector>
#include <memory>
#include <time.h>

namespace generators
{
class RandomTestVectorFactory
{

public:
	static std::unique_ptr< std::vector< char > > CreateVector
		(
		unsigned first_fragment,
		unsigned second_fragment
		);

private:
  static const unsigned END_OF_LINE = 1;

  static char CreateRandomBit();



};

}
#endif // GENERATORS_RANDOM_TESTVECTOR_FACTORY_H_