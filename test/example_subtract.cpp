#include <boost/test/unit_test.hpp>

#include "example.h"

BOOST_AUTO_TEST_CASE( subtract )
{
  auto res = subtract_numbers(1.0, 2.0);
  BOOST_TEST(res == -1.0);
}
