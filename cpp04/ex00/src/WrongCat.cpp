/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 17:40:28 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/06 17:40:29 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>

WrongCat::WrongCat()
{
  type = "WrongCat";
  std::string str = "q;owhiuwegfioygweifygwe";
  setSound(str);
  std::cout << "[WRONGCAT] Default constructor called" << std::endl;
}
