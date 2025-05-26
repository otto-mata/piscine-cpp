/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:02:30 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:18:38 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int
main(int argc, char** argv)
{
  std::string annoyanceLevel;

  if (argc < 2)
    annoyanceLevel = "ounga";
  else
    annoyanceLevel = argv[1];

  Harl jim = Harl();
  jim.complain(annoyanceLevel);
}
