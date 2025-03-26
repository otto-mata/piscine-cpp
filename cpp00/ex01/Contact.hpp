/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Contact.hpp                                          ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/03/26 18:13:06 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/03/26 18:14:45 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string _lastName;
	std::string _firstName;
	std::string _nickName;
	std::string _darkestSecret;

public:
	Contact(/* args */);
	~Contact();
	Contact(const Contact &other);
	Contact &operator=(const Contact &other);
};

#endif
