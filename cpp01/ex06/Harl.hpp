/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Harl.hpp                                             ┌─┐┌┬┐┌┬┐┌─┐        */
/*                                                        │ │ │  │ │ │        */
/*   By: tblochet <tblochet@student.42.fr>                └─┘ ┴  ┴ └─┘        */
/*                                                        ┌┬┐┌─┐┌┬┐┌─┐        */
/*   Created: 2025/04/04 18:00:25 by tblochet             │││├─┤ │ ├─┤        */
/*   Updated: 2025/04/05 11:11:09 by tblochet             ┴ ┴┴ ┴ ┴ ┴ ┴        */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void _unknown();

public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif
