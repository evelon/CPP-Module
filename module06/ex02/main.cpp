#include "identify.hpp"

int	main()
{
	srand(time(NULL));

	for (int i = 0; i < 32; i++)
	{
		Base*	b = generateBase();
		identify_from_pointer(b);
		identify_from_reference(*b);
		delete b;
	}
}