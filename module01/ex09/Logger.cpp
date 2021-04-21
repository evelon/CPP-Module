#include "Logger.hpp"

void	Logger::logToConsole(std::string& str)
{
	std::cout << makeLogEntry(str) << std::endl;
}

void	Logger::logToFile(std::string& str)
{
	logfile << makeLogEntry(str) << std::endl;
}

std::string	Logger::makeLogEntry(std::string& str)
{
	std::string	log_str(timestamp() + str);
	return (log_str);
}


std::string	Logger::timestamp(void)
{
	time_t		raw_time;
	tm			*time_info;
	char		buffer[20];

	time(&raw_time);
	time_info = localtime(&raw_time);
	strftime(buffer, 20, "[%Y%m%d_%H%M%S]", time_info);
	std::string	timestamp(buffer);
	return (timestamp);
}

Logger::Logger(std::string file_name):
	logfile(file_name) {}

Logger::Logger(void)
{
	logfile.close();
}

void	Logger::log(std::string const& dest, std::string const& message)
{
	void	(Logger::* logTo[2])(std::string&) =
	{
		&Logger::logToConsole,
		&Logger::logToFile
	};
	std::string	names[2] =
	{
		"Console",
		"File"
	};

	std::string	cast(message);

	for (int i = 0; i < 2; i++)
	{
		if (!names[i].compare(dest))
			(this->*logTo[i])(cast);
	}
}
