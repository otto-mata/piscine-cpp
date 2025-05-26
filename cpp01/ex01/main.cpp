/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 19:55:03 by tblochet          #+#    #+#             */
/*   Updated: 2025/05/26 04:38:17 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
#define EXIT_INVALID_ARGC 1 << 0
#define EXIT_INVALID_SIZE 1 << 1
#define EXIT_ALLOC_ERROR 1 << 2
int
main(int argc, char** argv)
{

  if (argc != 3) {
    std::cerr << "Usage: " << argv[0] << " <name> <size>" << std::endl;
    return EXIT_INVALID_ARGC;
  }
  int size = std::atoi(argv[2]);
  std::string name = std::string(argv[1]);
  if (size <= 0) {
    std::cerr << "Error:size must be a positive , non-zero, integer"
              << std::endl;
    return EXIT_INVALID_SIZE;
  }

  Zombie* horde = zombieHorde(size, name);
  if (!horde)
    return EXIT_ALLOC_ERROR;

  for (int i = 0; i < size; i++)
    horde[i].announce();

  delete[] horde;
  return (EXIT_SUCCESS);
}
