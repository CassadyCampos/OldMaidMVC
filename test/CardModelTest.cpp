/**
* @author Cassady Campos
* @date October 12 2019
*/
#include "gtest/gtest.h"
#include "../include/CardModel.h"

TEST(CardModelTest, constructorTest) {
    const string expectedRank = "A";
    const string expectedSuite = "Spade";
    Card card(expectedRank, expectedSuite);

    EXPECT_EQ(card.getRank(), expectedRank);
    EXPECT_EQ(card.getSuite(), expectedSuite);
    
};