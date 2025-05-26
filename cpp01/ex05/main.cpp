/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 18:02:30 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:18:28 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int
main()
{
  Harl jim = Harl();
  jim.complain("DEBUG");
  jim.complain("INFO");
  jim.complain("WARNING");
  jim.complain("ERROR");
  jim.complain("ounga bounga");
}
