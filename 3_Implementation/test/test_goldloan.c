#include "unity.h"
#include "Goldloan.h"
#include "test_Goldloan.h"

void test_Goldloan_basic(void)
{
  
	TEST_ASSERT_EQUAL(584,Goldloan(5) );
}

int test_Goldloan(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_Goldloan_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
