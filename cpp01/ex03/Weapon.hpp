/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Weapon.hpp                                           ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/03 12:53:08 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/03 13:08:25 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string);
	std::string getType() const;
	void setType(const std::string);
private:
	std::string type;
};
#endif
