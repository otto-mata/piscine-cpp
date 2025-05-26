#include "Weapon.hpp"

Weapon::Weapon()
  : type("carrot")
{
}

Weapon::Weapon(std::string weaponType)
{
  this->type = weaponType;
}

std::string
Weapon::getType() const
{
  return (this->type);
}

void
Weapon::setType(const std::string newType)
{
  this->type = newType;
}
