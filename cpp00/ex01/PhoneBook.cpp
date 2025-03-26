/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PhoneBook.cpp                                        ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/26 18:16:19 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/26 18:27:43 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook()
{
}

PhoneBook::PhoneBook(const PhoneBook &other)
{
	*this = other;
}

PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		*this = PhoneBook(other);
	}
	return (*this);
}

Contact *PhoneBook::getContacts()
{
	return (this->_contacts);
}

int	PhoneBook::addContact(Contact contact)
{
	return (1);
}

