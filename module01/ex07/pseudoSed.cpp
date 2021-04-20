#include "pseudoSed.hpp"
#include <cstddef>

pseudoSed::pseudoSed(void):
	text(std::string("")) {}

pseudoSed::pseudoSed(std::string text):
	text(text) {}

pseudoSed::~pseudoSed() {}

void	pseudoSed::setText(std::string str)
{
	this->text = str;
	return ;
}

std::string&	pseudoSed::getText(void)
{
	return (this->text);
}

void	pseudoSed::replace(std::string& s1, std::string& s2)
{
	size_t	pos = 0;

	pos = this->text.find(s1, pos);
	while (pos != std::string::npos)
	{
		text.replace(pos, s1.length(), s2);
		pos += s2.length();
		pos = this->text.find(s1, pos);
	}
	return ;
}

void	pseudoSed::replace(char* s1, char* s2)
{
	size_t	pos = 0;

	pos = this->text.find(s1, pos);
	while (pos != std::string::npos)
	{
		text.replace(pos, strlen(s1), s2);
		pos += strlen(s2);
		pos = this->text.find(s1, pos);
	}
	return ;
}
