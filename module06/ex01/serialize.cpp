#include "serialize.hpp"

void*	serialize(void)
{
	char*	series = new char[20];
	char	alnum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int		i;

	for (i = 0; i < 8; i++)
		series[i] = alnum[rand() % strlen(alnum)];
	int*	temp = reinterpret_cast<int*>(&series[i]);
	*temp = rand();
	i += 4;
	for (; i < 20; i++)
		series[i] = alnum[rand() % strlen(alnum)];
	return (static_cast<void*>(series));
}

Data*	deserialize(void* raw)
{
	struct rawData
	{
		char	s1[8];
		int		n;
		char	s2[8];
	};

	struct rawData*	rd;

	rd = static_cast<struct rawData*>(raw);

	Data*	ret = new Data;
	ret->s1 = std::string(rd->s1);
	ret->n = rd->n;
	ret->s2 = std::string(rd->s2);
	return (ret);
}
