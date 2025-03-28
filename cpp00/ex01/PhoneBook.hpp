/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   PhoneBook.hpp                                        ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/26 18:13:01 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/28 16:14:44 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <sstream>
# include <iostream>
# include "Contact.hpp"

# define MAX_CONTACTS 8
# define MAX_COMMANDS 3
# define COLUMN_WIDTH 10
# define ADD_CMD "ADD"
# define SEARCH_CMD "SEARCH"
# define EXIT_CMD "EXIT"

class PhoneBook
{
	private:
		Contact		_contacts[MAX_CONTACTS];
		int			_current;
		int			_active;
	
	public:
		/* ctor */	PhoneBook() : _current(0), _active(1) {}
		/* dtor */	~PhoneBook() {}
		/* ctor */	PhoneBook(const PhoneBook &other);
		PhoneBook	&operator=(const PhoneBook &other);
	
		Contact		*getContacts();
		int			addContact(Contact contact);
		void		getUserCommand();
		int			active();
};

#endif
