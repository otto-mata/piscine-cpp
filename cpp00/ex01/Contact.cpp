/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 06:21:43 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 03:26:15 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(const Contact& other)
{
  *this = other;
}

Contact&
Contact::operator=(const Contact& other)
{
  if (this != &other) {
    this->_lastname = other._lastname;
    this->_firstname = other._firstname;
    this->_nickname = other._nickname;
    this->_darkestSecret = other._darkestSecret;
    this->_phoneNumber = other._phoneNumber;
    this->_isInitialized = other._isInitialized;
  }
  return (*this);
}

Contact
Contact::fromInput()
{
  Contact newContact;

  std::string lname, fname, nick, secret, num;
  newContact = Contact();
  newContact.initialized(true);

  std::cout << "LASTNAME: ";
  std::getline(std::cin, lname);
  newContact.lastname(lname);

  std::cout << "FIRSTNAME: ";
  std::getline(std::cin, fname);
  newContact.firstname(fname);

  std::cout << "NICKNAME: ";
  std::getline(std::cin, nick);
  newContact.nickname(nick);

  std::cout << "SECRET: ";
  std::getline(std::cin, secret);
  newContact.secret(secret);

  std::cout << "PHONE NUMBER: ";
  std::getline(std::cin, num);
  newContact.number(num);

  return (newContact);
}

std::string
Contact::lastname()
{
  return (this->_lastname);
}

void
Contact::lastname(std::string newLastname)
{
  this->_lastname = newLastname;
}

std::string
Contact::firstname()
{
  return (this->_firstname);
}
void
Contact::firstname(std::string newFirstname)
{
  this->_firstname = newFirstname;
}

std::string
Contact::nickname()
{
  return (this->_nickname);
}

void
Contact::nickname(std::string newNickname)
{
  this->_nickname = newNickname;
}

std::string
Contact::secret()
{
  return (this->_darkestSecret);
}

void
Contact::secret(std::string newSecret)
{
  this->_darkestSecret = newSecret;
}

std::string
Contact::number()
{
  return (this->_phoneNumber);
}

void
Contact::number(std::string newNumber)
{
  this->_phoneNumber = newNumber;
}

bool
Contact::isInitialized()
{
  return (this->_isInitialized);
}

void
Contact::initialized(bool state)
{
  this->_isInitialized = state;
}

void
Contact::display()
{
  std::cout
    << "---------------------------------------------------------------------"
    << std::endl;
  std::cout << "CONTACT DETAILS FOR \"" << this->firstname() << " '"
            << this->nickname() << "' " << this->lastname() << "\""
            << std::endl;
  std::cout << "FIRSTNAME: " << this->firstname() << std::endl;
  std::cout << "LASTNAME: " << this->lastname() << std::endl;
  std::cout << "NICKNAME: " << this->nickname() << std::endl;
  std::cout << "NUMBER: " << this->number() << std::endl;
  std::cout << "SECRET: " << this->secret() << std::endl;
  std::cout
    << "---------------------------------------------------------------------"
    << std::endl;
}
