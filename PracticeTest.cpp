/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, palindrome_test)
{
		Practice pObject;
		ASSERT_EQ(pObject.isPalindrome("racecar"), true);
}

TEST(PracticeTest, sort_test)
{
		Practice pObject;
		int first = 3;
		int second = 3;
		int third = 5;
		pObject.sortDescending(first, second, third);
		ASSERT_EQ(first, 5);
		ASSERT_EQ(second, 3);
		ASSERT_EQ(third, 3);
}

TEST(PracticeTest, repeats_test)
{
		Practice pObject;
		ASSERT_EQ(pObject.count_starting_repeats("zzzebra"), 3);
}
