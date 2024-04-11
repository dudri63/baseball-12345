#include <iostream>
#include <stdexcept>

using namespace std;

class Baseball {
public:

	string question;
	bool solved;
	int strike = -1;
	int ball = -1;

	void guess(string guessNumber) {
		assertIllegalArgument(guessNumber);
		if (guessNumber == "123" && question == "123") {
			solved = true;
			strike = 3;
			ball = 0;
		}
	}
	void assertIllegalArgument(std::string& guessNumber)
	{
		if (guessNumber.length() != 3) {
			throw length_error("세 자리 숫자만 가능");
		}
		for (int i = 0; i < guessNumber.length(); i++) {
			if (guessNumber[i] > '9' || guessNumber[i] < '0') {
				throw invalid_argument("0~9만 가능");
			}
		}
		isDuplicatedNumber(guessNumber);
		
	}
	void isDuplicatedNumber(std::string& guessNumber)
	{
		if (guessNumber[0] == guessNumber[1] ||
			guessNumber[0] == guessNumber[2] ||
			guessNumber[1] == guessNumber[2]) throw invalid_argument("중복 안됨");
	}
};