#include <iostream>
#include <string>
#include "chat.h"

int main()
{
	std::string pass1 = "qwerty";
	std::string pass2 = "123";
	std::string pass3 = "password";

	Chat chat;

	chat.reg("login1", pass1.c_str(), pass1.size());
	chat.reg("login2", pass2.c_str(), pass2.size());

	std::cout << chat.login("login1", pass1.c_str(), pass1.size()) << std::endl;
	std::cout << chat.login("login2", pass2.c_str(), pass2.size()) << std::endl;
	std::cout << chat.login("login1", pass3.c_str(), pass3.size()) << std::endl;
	return 0;
}
