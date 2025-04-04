/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   main.cpp                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/04 18:02:30 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/04 18:20:03 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl jim = Harl();
	jim.complain("DEBUG");
	jim.complain("INFO");
	jim.complain("WARNING");
	jim.complain("ERROR");
	jim.complain("ounga bounga");
}
