#include "gtest/gtest.h"
#include "task_1.h"

TEST(ProductsAmount, BasicGetProductsAmount) {
    std::vector<unsigned int> prices{10, 20, 5, 50};
    ASSERT_EQ(2, GetProductsAmount(prices, 15));
    ASSERT_EQ(4, GetProductsAmount(prices, 100));
    ASSERT_EQ(0, GetProductsAmount(prices, 0));
    prices = {100, 100, 200, 300};
    ASSERT_EQ(1, GetProductsAmount(prices, 100));
    ASSERT_EQ(0, GetProductsAmount(prices, 50));
}

TEST(ProductsAmount, GetAllProducts) {
    std::vector<unsigned int> prices = {10, 20, 30, 40, 50};
    ASSERT_EQ(5, GetProductsAmount(prices, 150));
    ASSERT_EQ(5, GetProductsAmount(prices, 200));
}

TEST(ProductsAmount, NegativeMoneyAmount) {
    std::vector<unsigned int> prices{10, 20, 5, 50};
    ASSERT_EQ(0, GetProductsAmount(prices, -10));
}

TEST(ProductsAmount, EmptyPricesList) {
    std::vector<unsigned int> prices{};
    ASSERT_EQ(0, GetProductsAmount(prices, 100));
}

TEST(ProductsAmount, ZeroPrices) {
    std::vector<unsigned int> prices{0, 0, 0, 0};
    ASSERT_EQ(4, GetProductsAmount(prices, 0));
}

TEST(ProductsAmount, OnePriceOnly) {
    std::vector<unsigned int> prices{10};
    ASSERT_EQ(1, GetProductsAmount(prices, 10));
    ASSERT_EQ(0, GetProductsAmount(prices, 5));
}

TEST(ProductsAmount, MoneyAmountJustEnough) {
    std::vector<unsigned int> prices{10, 20, 30};
    ASSERT_EQ(2, GetProductsAmount(prices, 30));
}