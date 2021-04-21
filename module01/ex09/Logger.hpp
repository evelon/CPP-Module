#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>
# include <fstream>
# include <iostream>

class	Logger
{
private:
	std::ofstream	logfile;

	void			logToConsole(std::string& str);
	void			logToFile(std::string& str);
	std::string		makeLogEntry(std::string& str);
	std::string		timestamp(void);
public:
	Logger(std::string file_name);
	Logger(void);
	void	log(std::string const& dest, std::string const& message);
};

#endif
