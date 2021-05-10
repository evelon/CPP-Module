#ifndef IINSTRUCTION_HPP
# define IINSTRUCTION_HPP

# include <deque>
# include <array>

# define LOOP_START (6)
# define LOOP_END (7)

class	IInstruction
{
public:
	virtual ~IInstruction() {};
	virtual void	execute(
		std::deque<char>::iterator& it,
		std::array<char, 30000>::iterator& ptr
		) const = 0;
};

#endif