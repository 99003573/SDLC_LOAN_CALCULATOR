#include "unity.h"
#include "Carloan.h"
#include "test_Carloan.h"

void test_Carloan_basic(void)
{
	TEST_ASSERT_EQUAL(3407,Carloan(70000);
}

int test_Carloan(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

	/* Run Test functions */
	RUN_TEST(test_Carloan_basic);

	/* Close the Unity Test Framework */
	return UNITY_END();
}
