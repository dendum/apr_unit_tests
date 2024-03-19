#include "gtest/gtest.h"
#include "task_2.h"

TEST(IsLeapYear, Year2024IsLeap) {
    EXPECT_TRUE(IsLeapYear(2024));
}

TEST(IsLeapYear, Year2000IsLeap) {
    EXPECT_TRUE(IsLeapYear(2000));
}

TEST(IsLeapYear, Year2001IsNotLeap) {
    EXPECT_FALSE(IsLeapYear(2001));
}

TEST(IsLeapYear, Year1900IsNotLeap) {
    EXPECT_FALSE(IsLeapYear(1900));
}

TEST(IsLeapYear, Year0IsLeap) {
    EXPECT_TRUE(IsLeapYear(0));
}

TEST(IsLeapYear, Year1600IsLeap) {
    EXPECT_TRUE(IsLeapYear(1600));
}

TEST(IsLeapYear, Year1700IsNotLeap) {
    EXPECT_FALSE(IsLeapYear(1700));
}

TEST(IsLeapYear, Year1IsNotLeap) {
    EXPECT_FALSE(IsLeapYear(1));
}

TEST(IsLeapYear, Year4IsLeap) {
    EXPECT_TRUE(IsLeapYear(4));
}