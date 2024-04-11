#include "pch.h"
#include "../Project18/baseball.cpp"

#include<stdexcept>


TEST(TestCaseName, TestName) {
	Baseball game;

	EXPECT_THROW(game.guess("12"), std::length_error);
	EXPECT_THROW(game.guess("12a"), std::invalid_argument);
	EXPECT_THROW(game.guess("121"), std::invalid_argument);
	
}