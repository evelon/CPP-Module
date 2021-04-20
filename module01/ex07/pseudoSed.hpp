#ifndef PSEUDOSED_HPP
# define PSEUDOSED_HPP

# include <string>

class pseudoSed
{
private:
	std::string	text;

public:
	pseudoSed(void);
	pseudoSed(std::string text);
	~pseudoSed();
	std::string&	getText(void);
	void			setText(std::string str);
	void			replace(std::string& s1, std::string& s2);
	void			replace(char* s1, char* s2);
};

#endif
