#include "Serialization.hpp"
/*
*	8 -> std pointer
*	4 -> int
*	8 -> std pointer
*/
void *serialize(void)
{
	std::string word = "abcdefghijklmopqrstuvxyz0123456789";
	int wordLength = word.length();
	char *raw;


	srand(time(NULL));
	raw = new char[20];
	for (int i = 0; i < 8; i++)
		raw[i] = word[rand() % wordLength];
	*reinterpret_cast<int*>(raw + 8) = rand() % 20000;
	for (int i = 0; i < 8; i++)
		raw[i + 12] = word[rand() % wordLength];
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *data = new Data;

	data->s1 = std::string(static_cast<char*>(raw), 8);
	data->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (data);	
}