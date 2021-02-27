#include "unity.h"
#include "carloan.h"
#include "test_carloan.h"

void test_Carloan_basic(void)
{
	TEST_ASSERT_EQUAL(1,emi_calc(20));
}

void test_Carloan(void)
{
	/* Run Test functions */
	RUN_TEST(test_Carloan_basic);
}
