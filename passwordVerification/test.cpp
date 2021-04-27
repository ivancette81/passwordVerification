#include "pch.h"
/*
* null password
* one character password
* eigth character password
* >eigth character password
* >0 upper case characters
* >0 lower characters password
* >0 number charaters password
*/

class PasswordVerifier
{
public:
	PasswordVerifier() {};
	bool verify(const char * password) {
		if (password == NULL)
			return false;
		else
			return false;
	}
};


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(TestCasePasswordVerification, nullPassword) {
	PasswordVerifier passVerifier;
	EXPECT_FALSE(passVerifier.verify(NULL));
}

TEST(TestCasePasswordVerification, oneCharacter) {
	PasswordVerifier passVerifier;
	EXPECT_FALSE(passVerifier.verify("a"));
}