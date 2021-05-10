#include "Executer.hpp"

const IncrPtr	Executer::incrPtr = IncrPtr();
const DecrPtr	Executer::decrPtr = DecrPtr();
const IncrVal	Executer::incrVal = IncrVal();
const DecrVal	Executer::decrVal = DecrVal();
const InputVal	Executer::inputVal = InputVal();
const OutputVal	Executer::outputVal = OutputVal();
const LoopStart	Executer::loopStart = LoopStart();
const LoopEnd	Executer::loopEnd = LoopEnd();

const char			Executer::instrSymbols[8] = {
	'>', '<', '+', '-', ',', '.', '[', ']'
};

const IInstruction* const	Executer::instrList[8] = {
	&Executer::incrPtr,
	&Executer::decrPtr,
	&Executer::incrVal,
	&Executer::decrVal,
	&Executer::inputVal,
	&Executer::outputVal,
	&Executer::loopStart,
	&Executer::loopEnd
};

Executer::Executer():
	ptr(memory.begin()), instrIter(instrQ.begin())
{}

Executer::Executer(Executer const& executer):
	memory(executer.memory), instrQ(executer.instrQ)
{
	this->ptr = this->memory.begin() + (executer.ptr - executer.memory.begin());
}

Executer::~Executer() {}

Executer&	Executer::operator=(Executer const& executer)
{
	this->memory = executer.memory;
	this->ptr = this->memory.begin() + (executer.ptr - executer.memory.begin());
	this->instrQ = executer.instrQ;
	return (*this);
}

void	Executer::storeInstr(char c)
{
	for (int i = 0; i < 8; i++)
	{
		if (instrSymbols[i] == c)
		{
			this->instrQ.push_back(i);
			return ;
		}
	}
	assert(0);
}

void	Executer::execute(void)
{
	instrIter = instrQ.begin();
	while (instrIter != instrQ.end())
		instrList[(*instrIter)]->execute(instrIter, ptr);
}