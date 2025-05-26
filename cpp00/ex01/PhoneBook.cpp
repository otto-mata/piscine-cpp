/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 03:15:10 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 03:26:53 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

#include <cstdlib>

PhoneBook::PhoneBook(const PhoneBook& other)
{
  *this = other;
}

PhoneBook&
PhoneBook::operator=(const PhoneBook& other)
{
  if (this != &other) {
    *this = PhoneBook(other);
  }
  return (*this);
}

Contact*
PhoneBook::getContacts()
{
  return (this->_contacts);
}

int
PhoneBook::addContact(Contact contact)
{
  if (this->_current >= MAX_CONTACTS)
    this->_current = 0;
  this->_contacts[this->_current] = contact;
  this->_current++;
  return (0);
}

int
PhoneBook::active()
{
  return (this->_active);
}

static std::string
repeatString(std::string str, size_t n)
{
  std::string reps = "";
  for (size_t i = 0; i < n; i++) {
    reps += str;
  }
  return (reps);
}

static std::string
chopString(std::string original)
{
  std::string chopped;

  if (original.size() == COLUMN_WIDTH)
    return std::string(original);
  if (original.size() < COLUMN_WIDTH)
    chopped = repeatString(" ", COLUMN_WIDTH - original.size()) + original;
  else {
    chopped = std::string(original).substr(0, COLUMN_WIDTH);
    chopped[COLUMN_WIDTH - 1] = '.';
  }
  return (chopped);
}

static std::string
indexToString(size_t i)
{
  std::stringstream ss;
  ss << (i + 1);
  return ss.str();
}

void
PhoneBook::getUserCommand()
{
  std::string cmd;

  std::cout << "PB> ";
  std::getline(std::cin, cmd);
  if (std::cin.eof()) {
    this->_active = 0;
    std::cin.clear();
    std::cout << "\nEXITING" << std::endl;
  } else if (cmd == EXIT_CMD) {
    std::cout << "EXITING" << std::endl;
    this->_active = 0;
  } else if (cmd == ADD_CMD) {
    Contact newContact = Contact::fromInput();
    this->addContact(newContact);
  } else if (cmd == SEARCH_CMD) {
    std::cout << "|" + chopString("INDEX") + "|" + chopString("FIRSTNAME") +
                   "|" + chopString("LASTNAME") + "|" + chopString("NICKNAME") +
                   "|"
              << std::endl;

    for (size_t i = 0; i < MAX_CONTACTS; i++) {
      Contact current = this->_contacts[i];
      if (!current.isInitialized())
        continue;

      std::cout << "|" + chopString(indexToString(i)) + "|" +
                     chopString(current.firstname()) + "|" +
                     chopString(current.lastname()) + "|" +
                     chopString(current.nickname()) + "|"
                << std::endl;
    }
    std::string contact_n;

    std::cout << "CONTACT #> ";
    std::getline(std::cin, contact_n);
    int num = std::atoi(contact_n.c_str());
    if (num < 1 || num > this->_current) {
      std::cout << "INVALID CONTACT NUMBER '" << num << "'." << std::endl;
      return;
    }
    this->_contacts[num].display();
  }
}
