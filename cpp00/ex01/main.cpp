/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 18:13:07 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 03:20:41 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int
main()
{
  PhoneBook pb = PhoneBook();
  std::cout << "T E L S O F T   S Y S T E M S" << std::endl;
  std::cout << "      PhoneBook v5.3.0a" << std::endl;
  while (pb.active()) {
    pb.getUserCommand();
  }

  return (0);
}
