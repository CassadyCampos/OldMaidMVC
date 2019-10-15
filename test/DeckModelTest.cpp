/**
* @author Cassady Campos
* @date October 12 2019
*/
#include "gtest/gtest.h"
#include "../include/DeckModel.h"

TEST(DeckModelTest, deckGenerationTest) {
    Deck deck;
    EXPECT_EQ(deck.getCards().size(), 0);

    deck.generateDeck();
    EXPECT_EQ(deck.getCards().size(), 52);
};

TEST(DeckModelTest, takeTopCardTest) {
    Deck deck;
    deck.generateDeck();

    EXPECT_EQ(deck.getCards().size(), 52);
    deck.takeTopCard();

    EXPECT_EQ(deck.getCards().size(), 51);

};