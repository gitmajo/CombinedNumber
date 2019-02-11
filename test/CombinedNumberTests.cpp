#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>

struct CombinedNumberTests : public ::testing::Test
{
    CombinedNumber cn;
};

TEST_F(CombinedNumberTests, assertThatFalseIsTrue)
{
    ASSERT_TRUE(true);
}

TEST_F(CombinedNumberTests, whenEmptyListIsGivenReturnEmptyString)
{
    //std::list<unsigned int> l={};

    auto result = cn.constructGreatestNumber({});
    ASSERT_EQ(result, "");
}

TEST_F(CombinedNumberTests, whenOneIsGivenStringOneIsReturned)
{
    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result, "1");
}

