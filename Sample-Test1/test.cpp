#include "pch.h"
#include "../Project18/baseball.cpp"

#include<stdexcept>

class BaseballFixture : public testing::Test {
public:
	Baseball game;
	void assertIllegalArgument(string guessNumber) {
		try {
			game.guess(guessNumber);
			FAIL();
		}
		catch (exception e) {
			 
		}
	}
};

TEST_F(BaseballFixture, InvalidArgumentTest) {
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
	assertIllegalArgument("121");
}

TEST(TestCaseName, MatchedNumber) {
	Baseball game;
	game.question = "123";
	game.guess("123");
	
	EXPECT_TRUE(game.solved);
	EXPECT_EQ(game.strike, 3);
	EXPECT_EQ(game.ball, 0);
}