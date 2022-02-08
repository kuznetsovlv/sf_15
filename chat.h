#pragma once
#include <cstring>
#include "sha1.h"
#include "hashTable.h"

#define LOGINLENGTH 10

class Chat {
    public:
        void reg(char _login[LOGINLENGTH], char _pass[], int pass_length);
        bool login(char _login[LOGINLENGTH], char _pass[], int pass_length);

        friend void test(Chat& c);
    private:
		HashTable _data;
};
