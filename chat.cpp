#include <cstring>
#include "chat.h"
#include "hashTable.h"
#include "sha1.h"

void Chat::reg(char _login[LOGINLENGTH], char _pass[], int pass_length) {
    // Ваш код
    const uint *hash = sha1(_pass, pass_length);

	_data.add(_login, hash);
	delete[] hash;
}
bool Chat::login(char _login[LOGINLENGTH], char _pass[], int pass_length) {
    // Ваш код
    // Нужно вернуть true в случае успешного логина
	const uint *saved = _data.find(_login);
	if(saved)
	{
		const uint *current = sha1(_pass, pass_length);
		bool logged = !memcmp(saved, current, SHA1HASHLENGTHBYTES);
		delete[]current;
		return logged;
	}
    return false;
}
