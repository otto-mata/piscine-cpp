/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:02:31 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:18:22 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void
Harl::debug(void)
{
  std::string msg("I love having extra bacon for my "
                  "7XL-double-cheese-triple-pickle-special-ketchup burger. "
                  "I really do!");
  std::cout << "[DEBUG] " << msg << std::endl;
}

void
Harl::info(void)
{
  std::string msg("I cannot believe adding extra bacon costs more money. "
                  "You didn’t put enough bacon in my burger! "
                  "If you did, I wouldn’t be asking for more!");
  std::cout << "[INFO] " << msg << std::endl;
}

void
Harl::warning(void)
{
  std::string msg("I think I deserve to have some extra bacon for free. "
                  "I’ve been coming for years, "
                  "whereas you started working here just last month.");
  std::cout << "[WARNING] " << msg << std::endl;
}

void
Harl::error(void)
{
  std::string msg("This is unacceptable! I want to speak to the manager now.");
  std::cout << "[ERROR] " << msg << std::endl;
}

void
Harl::_unknown(std::string level)
{
  std::string msg("What did you just say to me, you little s--t? " + level +
                  "? What's that supposed to mean!?");
  std::cout << "[PANIC] " << msg << std::endl;
}

Harl::Harl() {}

Harl::~Harl() {}

void
Harl::complain(std::string level)
{
  void (Harl::* fptr[4])(
    void) = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
  std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
  for (int i = 0; i < 4; i++) {
    if (levels[i] == level) {
      (this->*fptr[i])();
      return;
    }
  }
  _unknown(level);
}
