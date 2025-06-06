/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:40:25 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/06 17:40:26 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>

Dog::Dog()
{
  type = "Dog";
  std::string sound = "waf";
  setSound(sound);
  std::cout << "[DOG] Default constructor called" << std::endl;
}
