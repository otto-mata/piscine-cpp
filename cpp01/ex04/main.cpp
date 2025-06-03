/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 16:50:51 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/03 16:42:43 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

/**
 * @brief Raplce every ocucrrence of PATTERN in BASE with REPLACEMENT
 * @param base Line string
 * @param pattern pattern to replace
 * @param replacement replacement string
 * @return Copy of base with pattern replaced.
 * Should have used iterators
 */
std::string
replaceInLine(std::string base, std::string pattern, std::string replacement)
{
  size_t offset = 0;
  size_t start = 0;
  std::string cpy(base);

  while (start != std::string::npos) {

    start = cpy.find(pattern, offset);
    if (start != std::string::npos) {
      cpy.erase(start, pattern.size());
      cpy.insert(start, replacement);
      offset = start + replacement.size();
    }
  };
  return (cpy);
}

int
main(int argc, char** argv)
{
  std::ifstream ifile;
  std::ofstream ofile;
  std::string base;

  if (argc != 4) {
    std::cout << "Usage: " << argv[0] << " <filename> <pattern> <replacement>"
              << std::endl;
    return (1);
  }

  std::string filePath(argv[1]);
  std::string pattern(argv[2]);
  std::string replacement(argv[3]);
  std::string targetFile(filePath + ".replace");

  if (pattern.length() == 0) {
    std::cerr << "Runtime error: pattern is empty." << std::endl;
    return (1);
  }

  ifile.open(filePath.c_str());
  if (ifile.fail()) {
    std::cerr << "I/O error: could not open file '" << filePath << "'."
              << std::endl;
    return (1);
  }

  ofile.open(targetFile.c_str());
  if (ofile.fail()) {
    ifile.close();
    std::cerr << "I/O error: could not open/create output file '" << targetFile
              << "'." << std::endl;
    return (1);
  }
  std::string replaced;
  while (!ifile.eof()) {
    getline(ifile, base);
    if (pattern != replacement)
      replaced = replaceInLine(base, pattern, replacement);
    else
      replaced = base;
    ofile << replaced << std::endl;
  }
  ifile.close();
  ofile.close();
  return (0);
}
