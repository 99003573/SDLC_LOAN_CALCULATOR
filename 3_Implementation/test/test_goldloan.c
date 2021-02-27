#include "unity.h"
#include "goldloan.h"
#include "test_goldloan.h"

void test_Goldloan_basic(void)
{
  
	TEST_ASSERT_EQUAL(584,Goldloan(5) );
}

void test_Goldloan(void)
{

	/* Run Test functions */
	RUN_TEST(test_Goldloan_basic);
}
