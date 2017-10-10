/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:30:06 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 13:45:38 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include  <stdexcept>

/* CONSTRUCTORS */


Bureaucrat::Bureaucrat(std::string name , int grade): _name(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooLowException("minimum grade 1");
  
  else if(grade > 150)
    throw Bureaucrat::GradeTooHighException("maximum grade 150");
  else
    this->_grade = grade;
  return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
  *this = src;
  return;
}

Bureaucrat::~Bureaucrat(void) {
  return;
}

/* MEMBERS */
std::string Bureaucrat::getName(void) const{
   return this->_name;
}

int Bureaucrat::getGrade(void) const{
   return this->_grade;
}

void Bureaucrat::gradeMoins(void){
  if (this->_grade < 150)
    this->_grade += 1;
  else
  throw Bureaucrat::GradeTooHighException("maximum grade 150");
}

void Bureaucrat::gradePlus(void){
  if (this->_grade > 1)
    this->_grade -= 1;
  else
  throw Bureaucrat::GradeTooLowException("minimum grade 1");
}

/* SUBCLASS */

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) {
  *this = src;
  return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){
  return;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(std::string  error) {
  this->_custoMsg = error;
}

const char*   Bureaucrat::GradeTooHighException::what() const throw(){
  return ("Erreur : GradeTooHighException " + this->_custoMsg).c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) {
  *this = src;
  return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw(){
  return;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(std::string  error) {
  this->_custoMsg = error;
}

const char*   Bureaucrat::GradeTooLowException::what() const throw(){
  return ("Erreur : GradeTooLowException " + this->_custoMsg).c_str();
}



/* OPERATORS */

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs){
  (void)rhs;
  return *this;
}
Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs){
  (void)rhs;
  
  return *this;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs) {
  (void)rhs;
  
  return *this;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs){
  o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
  return o;
}