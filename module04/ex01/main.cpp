#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int	main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion;

	AWeapon* pr = new PlasmaRifle;
	AWeapon* pf = new PowerFist;

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);

	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;

	delete b;
	b = new SuperMutant();

	me->attack(b);
	me->attack(b);

	std::cout << *me;
	me->equip(pf);
	std::cout << *me;

	me->attack(b);
	me->attack(b);
	me->attack(b);

	Character* you = new Character("you");

	you->attack(b);
	std::cout << *you;

	you->equip(pr);
	std::cout << *you;

	you->attack(b);
	you->equip(pf);

	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;

	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);

	delete you;
	delete me;
	delete pr;
	delete pf;

	return (0);
}