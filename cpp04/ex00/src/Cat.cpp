/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:40:23 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/06 17:40:24 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>

Cat::Cat()
{
  type = "Cat";
  std::string str = "meow";
  setSound(str);
  std::cout << "[CAT] Default constructor called" << std::endl;
}
