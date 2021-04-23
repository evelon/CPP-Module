#include <string>
#include <sstream>

typedef enum calc_type
{
	error = -1,
	none,
	bracket_open,
	bracket_close,
	operator_type,
	number
};

class exprParser
{
private:
	int					bracketLevel;
	calc_type			type;
	std::stringstream	ss;
	bool				result;

	bool		parseOne(calc_type new_one);
	calc_type	typeDetect(std::string& str);

public:
	exprParser(void);
	exprParser(std::string& str);
	~exprParser(void);
	void	parseNext(std::string& str);
	bool	endParse(void);
};
