/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 12:44:55 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/03 16:38:32 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int
main()
{
  std::string hiThisIsBrain = "HI THIS IS BRAIN";
  std::string* stringPTR = &hiThisIsBrain;
  std::string& stringREF = hiThisIsBrain;

  std::cout << "Memory address of hiThisIsBrain: " << &hiThisIsBrain
            << ", holding value: " << hiThisIsBrain << std::endl;

  std::cout << "Memory address of stringPTR: " << &stringPTR
            << ", pointing to value: " << *stringPTR << std::endl;

  std::cout << "Memory address of stringREF: " << &stringREF
            << ", holding value: " << stringREF << std::endl;
}
