#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generateBase(void);
void	identify_from_pointer(Base* p);
void	identify_from_reference(Base& p);

#endif
