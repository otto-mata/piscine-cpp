/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:00:25 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:18:25 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl
{
private:
  void debug(void);
  void info(void);
  void warning(void);
  void error(void);
  void _unknown(std::string level);

public:
  Harl();
  ~Harl();
  void complain(std::string level);
};

#endif
