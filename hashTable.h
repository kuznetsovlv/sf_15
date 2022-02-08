#include <cstring>
#include "sha1.h"

enum PairStatus { empty, engaged, deleted };

struct Pair
{
	PairStatus status;
	char *key;
	uint *value;

	Pair()noexcept;
};

class HashTable final
{
	private:
	size_t _capacity;
	size_t _size;
	Pair *_array;

	size_t hash(const char*, const size_t)const noexcept;
	void resize();

	HashTable(const size_t);
	~HashTable();

	void add(const char*, const uint*);
	uint* find(const char*);
	void remove(const char*);
};
