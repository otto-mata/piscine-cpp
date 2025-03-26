/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PhoneBook.hpp                                        ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/26 18:13:01 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/26 18:24:32 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"

# define MAX_CONTACTS 8
# define MAX_COMMANDS 3
# define ADD_CMD "ADD"
# define SEARCH_CMD "SEARCH"
# define EXIT_CMD "EXIT"

class PhoneBook
{
private:
	const std::string	_commands[3] = {ADD_CMD, SEARCH_CMD, EXIT_CMD};
	Contact				_contacts[MAX_CONTACTS];
	int					_current;

public:
	/* ctor */	PhoneBook() = default;
	/* dtor */	~PhoneBook();
	/* ctor */	PhoneBook(const PhoneBook &other);
	PhoneBook	&operator=(const PhoneBook &other);
	Contact		*getContacts();
	int			addContact(Contact contact);
	
};

#endif
