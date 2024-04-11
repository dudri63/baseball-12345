#include <iostream>
#include <stdexcept>

using namespace std;

class Baseball {
public:



	void guess(string input) {
		if (input.length() != 3) {
			throw length_error("세 자리 숫자만 가능");
		}
		for (int i = 0; i < input.length(); i++) {
			if (input[i] > '9' || input[i] < '0') {
				throw invalid_argument("0~9만 가능");
			}
		}
		if (input[0] == input[1] ||
			input[0] == input[2] ||
			input[1] == input[2]) throw invalid_argument("중복 안됨");

	}
};