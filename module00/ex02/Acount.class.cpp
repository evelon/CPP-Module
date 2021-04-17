#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

string	YYmmDD_HHMMSS(void)
{
	time_t	raw_time;
	tm		*time_info;
	char	buffer[20];

	time(&raw_time);
	time_info = localtime(&raw_time);
	strftime(buffer, 20, "[%Y%m%d_%H%M%S]", time_info);
	return (string(buffer));
}

