class	IInstruction
{
public:
	virtual ~IInstruction();
	virtual void	execute(char* ptr) = 0;
};