#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../lib/simple/include/Matthews.h"

using namespace sequence;

TEST(MatthewsTests, ZeroRemainderTest){
    EXPECT_EQ(MatthewsOutcome::ZERO, checkMatthewsOutcome(0));
}

TEST(MatthewsTests, minusOneTwoTest){
    EXPECT_EQ(MatthewsOutcome::MINUS_ONE_CYCLE, checkMatthewsOutcome(-1));
}

TEST(MatthewsTests, minusTwoTest){
    EXPECT_EQ(MatthewsOutcome::MINUS_TWO_CYCLE, checkMatthewsOutcome(-2));
    EXPECT_EQ(MatthewsOutcome::MINUS_TWO_CYCLE, checkMatthewsOutcome(-4));
}

TEST(MatthewsTests, OneRemainderTest){
    EXPECT_EQ(MatthewsOutcome::ZERO, checkMatthewsOutcome(1));
}

TEST(MatthewsTests, TwoRemainderTest){
    EXPECT_EQ(MatthewsOutcome::ZERO, checkMatthewsOutcome(2));
}