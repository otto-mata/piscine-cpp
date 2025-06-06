/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:43:12 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/03 15:45:12 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
class Form
{
private:
  uint8_t _grade;
  std::string _name;

public:
  Form();
  Form(std::string name, uint8_t grade);
  Form(const Form& other);
  ~Form();
  Form& operator=(const Form& other);
  uint8_t grade(void) const;
  void grade(uint8_t const nGrade);
  void gradeUp(void);
  void gradeDown(void);
  std::string name(void) const;
  class GradeTooHighException : public std::exception
  {
    const char* what() const noexcept;
  };
  class GradeTooLowException : public std::exception
  {
    const char* what() const noexcept;
  };
};

std::ostream &operator<<(std::ostream out, Form const &bcrat);

#endif /* BUREAUCRAT_HPP */
