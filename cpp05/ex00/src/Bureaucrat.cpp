/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblochet <tblochet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:43:18 by tblochet          #+#    #+#             */
/*   Updated: 2025/06/03 15:41:10 by tblochet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat()
{
  std::cout << "Default constructor called for class 'Bureaucrat'."
            << std::endl;
  Bureaucrat(std::string("Bureaucrat#42"), 150);
}

Bureaucrat::Bureaucrat(std::string name, uint8_t grade)
{
  if (grade < 1)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();
  this->_grade = grade;
  this->_name = name;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
  std::cout << "Copy constructor called for class 'Bureaucrat'." << std::endl;
  uint8_t grade = other.grade();
  if (grade < 1)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();

  this->_grade = other.grade();
  this->_name = other.name();
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Destructor called for class 'Bureaucrat'." << std::endl;
}

Bureaucrat&
Bureaucrat::operator=(const Bureaucrat& other)
{
  std::cout << "Assignment operation called for class 'Bureaucrat'."
            << std::endl;
  uint8_t grade = other.grade();
  if (grade < 1)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();

  if (this != &other) {
    this->_grade = other.grade();
    this->_name = other.name();
  }
  return *this;
}

uint8_t
Bureaucrat::grade(void) const
{
  return this->_grade;
}

void
Bureaucrat::grade(uint8_t const nGrade)
{
  if (nGrade < 1)
    throw GradeTooHighException();
  if (nGrade > 150)
    throw GradeTooLowException();

  this->_grade = nGrade;
}

void
Bureaucrat::gradeUp(void)
{
  this->_grade--;

  if (this->_grade < 1)
    throw GradeTooHighException();
}

void
Bureaucrat::gradeDown(void)
{
  this->_grade++;

  if (this->_grade > 150)
    throw GradeTooLowException();
}

std::string
Bureaucrat::name(void) const
{
  return this->_name;
}

const char*
Bureaucrat::GradeTooHighException::what() const noexcept
{
  return "Grade is too high (< 1)";
}

const char*
Bureaucrat::GradeTooLowException::what() const noexcept
{
  return "Grade is too low (> 150)";
}

std::ostream&
operator<<(std::ostream out, Bureaucrat const& bcrat)
{
  out << bcrat.name() << ", bureaucrat grade " << bcrat.grade();
  return out;
}
