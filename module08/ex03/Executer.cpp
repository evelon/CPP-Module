#include "Executer.hpp"

void	loopInstr(void)
{

}

Executer::Executer():
	ptr(memory.begin()), instrPtr(instrQ.begin())
{
	for (int i = 0; i < 30000; i++)
		this->memory[i] = 0;
}

Executer::Executer(Executer const& executer):
	instrQ(executer.instrQ)
{
	for (int i = 0; i < 30000; i++)
		this->memory[i] = executer.memory[i];
	this->ptr = this->memory.begin() + (executer.ptr - executer.memory.begin());
}

Executer::~Executer()
{
	for (std::deque<IInstruction>::iterator it = this->instrQ.begin();
		it != this->instrQ.end();
		it++)
	{
		delete *it;
	}
}

Executer&	Executer::operator=(Executer const& executer)
{
	for (int i = 0; i < 30000; i++)
		this->memory[i] = executer.memory[i];
	this->ptr = this->memory.begin() + (executer.ptr - executer.memory.begin());
	this->instrQ = executer.instrQ;
}

void	Executer::getInstruction(char c)
{
	switch (c)
	{
		case '>':


	}
}

void	Executer::execute(void);