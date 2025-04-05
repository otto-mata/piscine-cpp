
/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/05 16:05:51 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 16:05:52 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout
		<< "Default ClapTrap's constructor called, he WILL be annoying" 
		<< std::endl;

	this->_hp = 10;
	this->_ep = 10;
	this->_atk = 0;
	this->_name = "CL4P-TP";
}

ClapTrap::ClapTrap(std::string ctName)
{
	std::cout
		<< "'"
		<< ctName
		<< "' has been constructed, huho..."
		<< std::endl;

	this->_hp = 10;
	this->_ep = 10;
	this->_atk = 0;
	this->_name = ctName;
}

ClapTrap::~ClapTrap()
{
	std::cout
		<< "ClapTrap '"
		<< this->name()
		<< "' was destroyed. Finally, some calm." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->hp() == 0)
	{
		std::cout
			<< "ClapTrap '"
			<< this->name()
			<< "' is knocked out and can't attack!"
			<< std::endl;
		return ;
	}
	else if (this->ep() == 0)
	{
		std::cout
			<< "ClapTrap '"
			<< this->name()
			<< "' is too tired to attack!"
			<< std::endl;
		return ;
	}
	std::cout
		<< "ClapTrap '"
		<< this->name()
		<< "' attacks '"
		<< target
		<< "', causing "
		<< this->atk()
		<<" points of damage !"
		<< std::endl;
	this->_ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp() == 0)
	{
		std::cout
			<< "ClapTrap '"
			<< this->name()
			<< "' is already knocked out."
			<< std::endl
			<< "Damn, they must hate him more than me!"
			<< std::endl;
		return ;
	}
	else if (amount == 0)
	{
		std::cout
			<< "ClapTrap '"
			<< this->name()
			<< "' is unbothered and doesn't take any damage"
			<< std::endl;
		return ;
	}

	std::cout
		<< "ClapTrap '"
		<< this->name()
		<< "' was hit! He losts "
		<< amount
		<< "HP!"
		<< std::endl;
	this->_hp -= amount;
	if (this->_hp <= 0)
	{
		std::cout
			<< "ClapTrap '"
			<< this->name()
			<< "' is rendered KO!"
			<< std::endl;
	}

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp() == 0)
	{
		std::cout
			<< "ClapTrap '"
			<< this->name()
			<< "' is knocked out and can't be repaired!"
			<< std::endl;
		return ;
	}
	else if (this->ep() == 0)
	{
		std::cout
			<< "ClapTrap '"
			<< this->name()
			<< "' is too tired to repair itself!"
			<< std::endl;
		return ;
	}
	std::cout
		<< "ClapTrap '"
		<< this->name()
		<< "' is repairing itself, regaining "
		<< amount
		<< "HP."
		<< std::endl;
	this->_ep--;
}

int ClapTrap::hp() const
{
	return (this->_hp);
}

void ClapTrap::hp(int newHp)
{
	this->_hp = newHp;
}

int ClapTrap::ep() const
{
	return (this->_ep);
}

void ClapTrap::ep(int newEp)
{
	this->_ep = newEp;
}

int ClapTrap::atk() const
{
	return (this->_atk);
}

void ClapTrap::atk(int newAttack)
{
	this->_atk = newAttack;
}

std::string ClapTrap::name() const
{
	return (this->_name);
}

void ClapTrap::name(std::string &newName)
{
	this->_name = newName;
}
