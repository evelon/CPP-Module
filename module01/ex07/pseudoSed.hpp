#ifndef PSEUDOSED_HPP
# define PSEUDOSED_HPP

# include <string>

class pseudoSed
{
private:
	std::string	oldStr;
	std::string	newStr;

public:
	pseudoSed(std::string oldStr, std::string newStr);
	~pseudoSed();
	void	replace(std::string& text);
};

#endif
