#include "HumanB.hpp"


HumanB::HumanB(std::string humanName)
{
	this->name = humanName;
}


void HumanB::attack()
{
	std::cout << this->name <<" attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon)
{
	this->weapon = &newWeapon;
}

Weapon HumanB::getWeapon() const
{
	return (*this->weapon);
}
