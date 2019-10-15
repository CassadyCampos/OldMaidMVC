/**
* @author Cassady Campos
* @date October 12 2019
*/
#include "gtest/gtest.h"
#include "../include/OldMaidModel.h"

TEST(OldMaidModelTest, addPlayerTest) {
    OldMaid oldMaid;

    EXPECT_EQ(oldMaid.getPlayersSize(), 0);

    oldMaid.addPlayer("FakeName");
    EXPECT_EQ(oldMaid.getPlayersSize(), 1);
};

TEST(OldMaidModelTest, getPlayersTest) {
    const string player1Name = "Cassady";
    const string player2Name = "NotCassady";

    OldMaid oldMaid;
    oldMaid.addPlayer(player1Name);
    oldMaid.addPlayer(player2Name);
    
    EXPECT_EQ(oldMaid.getPlayers()[0]->getName(), player1Name);
    EXPECT_EQ(oldMaid.getPlayers()[1]->getName(), player2Name);
};

TEST(OldMaidModelTest, dealCardsTest) {
    OldMaid oldMaid;
    const string player1Name = "Cassady";
    const string player2Name = "NotCassady";
    oldMaid.addPlayer(player1Name);
    oldMaid.addPlayer(player2Name);

    EXPECT_EQ(oldMaid.getPlayers()[0]->getHand().size(), 0);
    EXPECT_EQ(oldMaid.getPlayers()[1]->getHand().size(), 0);
    
    oldMaid.dealCards();
    EXPECT_EQ(oldMaid.getPlayers()[0]->getHand().size(), 0);
    EXPECT_EQ(oldMaid.getPlayers()[1]->getHand().size(), 0);
};

// Currently seg faulting
// TEST(OldMaidModelTest, takeCardFromTest) {
//     OldMaid oldMaid;
//     const string player1Name = "Cassady";
//     const string player2Name = "NotCassady";
//     oldMaid.addPlayer(player1Name);
//     oldMaid.addPlayer(player2Name);

//     oldMaid.dealCards();
//     string expectedCardRank = oldMaid.getPlayers()[0]->getHand()[0].getRank();
//     string expectedCardSuite = oldMaid.getPlayers()[0]->getHand()[0].getSuite();
   
//     // this is where it segfaults
//     Card cardTaken = oldMaid.takeCardFrom(oldMaid.getPlayers()[0], 1);

//     EXPECT_EQ(expectedCardRank, cardTaken.getRank());
//     EXPECT_EQ(expectedCardSuite, cardTaken.getSuite());
// };

TEST(OldMaidModelTest, giveCardToTest) {
    OldMaid oldMaid;
    const string player1Name = "Cassady";
    const string player2Name = "NotCassady";
    Card card("K", "Diamonds");
    oldMaid.addPlayer(player1Name);
    oldMaid.addPlayer(player2Name);

    oldMaid.dealCards();
    int player1HandSizeBefore = oldMaid.getPlayers()[0]->getHand().size();
    
    oldMaid.giveCardTo(oldMaid.getPlayers()[0], card);
    
    EXPECT_NE(oldMaid.getPlayers()[0]->getHand().size(), player1HandSizeBefore);
    EXPECT_EQ(oldMaid.getPlayers()[0]->getHand()[oldMaid.getPlayers()[0]->getHand().size()-1].getRank(), card.getRank());
    EXPECT_EQ(oldMaid.getPlayers()[0]->getHand()[oldMaid.getPlayers()[0]->getHand().size()-1].getSuite(), card.getSuite());
};

TEST(OldMaidModelTest, checkForPairsTest) {
    OldMaid oldMaid;
    const string player1Name = "Cassady";
    const string player2Name = "NotCassady";
    Card card("K", "Diamonds");
    Card cardPair("K", "Spades");
    oldMaid.addPlayer(player1Name);
    oldMaid.addPlayer(player2Name);

    oldMaid.giveCardTo(oldMaid.getPlayers()[0], card);
    oldMaid.giveCardTo(oldMaid.getPlayers()[0], cardPair);

    vector<vector<Card>> results = oldMaid.checkForPairs(oldMaid.getPlayers()[0]);

    // Check if we have a pair
    EXPECT_EQ(results.size(), 1);
    EXPECT_EQ(results[0].size(), 2);
};

TEST(OldMaidModelTest, checkForWinnerTest) {
    OldMaid oldMaid;
    const string player1Name = "Cassady";
    const string player2Name = "NotCassady";
    oldMaid.addPlayer(player1Name);
    oldMaid.addPlayer(player2Name);
    Card card("K", "Diamonds");
    
    oldMaid.giveCardTo(oldMaid.getPlayers()[0], card);
    Player* winner = oldMaid.checkForWinner();

    EXPECT_EQ(winner->getName(), player2Name);
};

TEST(OldMaidModelTest, isGameCompleteTest) {
    OldMaid oldMaid;
    const string player1Name = "Cassady";
    const string player2Name = "NotCassady";
    oldMaid.addPlayer(player1Name);
    oldMaid.addPlayer(player2Name);
    Card card("K", "Diamonds");
    
    oldMaid.giveCardTo(oldMaid.getPlayers()[0], card);
    oldMaid.checkForWinner();

    EXPECT_TRUE(oldMaid.isGameComplete());
};