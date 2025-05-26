#include "HumanA.hpp"

HumanA::HumanA(std::string humanName, Weapon& humanWeapon)
{
  this->name = humanName;
  this->weapon = &humanWeapon;
}

void
HumanA::attack()
{
  std::cout << this->name << " attacks with their " << this->weapon->getType()
            << std::endl;
}
