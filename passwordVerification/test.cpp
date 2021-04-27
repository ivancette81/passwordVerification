#include "pch.h"
#include <exception>
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
	bool verify(const char * password) throw(std::exception){
		if (password == NULL)
			throw new std::exception("NULL password");
		else {
			std::string passwordString(password);
			if (passwordString.length() <=8)
				throw new std::exception("Under nine characters password");
		}
		return true;
	}
};


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(TestCasePasswordVerification, nullPassword) {
	PasswordVerifier passVerifier;
	try {
		passVerifier.verify(NULL);
		FAIL();
	}
	catch (std::exception *e) {
		ASSERT_EQ(0, std::string("NULL password").compare(e->what()));
		SUCCEED();
	}
}

TEST(TestCasePasswordVerification, underNineCharacters) {
	PasswordVerifier passVerifier;
	try {
		passVerifier.verify("aaaaaaaa");
		FAIL();
	}
	catch (std::exception* e) {
		ASSERT_EQ(0, std::string("Under nine characters password").compare(e->what()));
		SUCCEED();
	}
}
