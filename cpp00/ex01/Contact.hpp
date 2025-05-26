/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:13:06 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 03:22:08 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
  std::string _lastname;
  std::string _firstname;
  std::string _nickname;
  std::string _darkestSecret;
  std::string _phoneNumber;
  bool _isInitialized;

public:
  Contact()
    : _lastname("")
    , _firstname("")
    , _nickname("")
    , _darkestSecret("")
    , _phoneNumber("")
    , _isInitialized(false)
  {
  }
  ~Contact() {}
  Contact(const Contact& other);

  Contact& operator=(const Contact& other);

  static Contact fromInput();

  std::string lastname();
  void lastname(std::string newLastname);

  std::string firstname();
  void firstname(std::string newFirstname);

  std::string nickname();
  void nickname(std::string newNickname);

  std::string secret();
  void secret(std::string newSecret);

  std::string number();
  void number(std::string newNumber);

  bool isInitialized();
  void initialized(bool state);
  void display();
};

#endif
