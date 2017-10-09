/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:30:06 by djoly             #+#    #+#             */
/*   Updated: 2017/10/09 17:43:29 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include  <stdexcept>

/* CONSTRUCTORS */

Bureaucrat::Bureaucrat(void) {
  return;
}

Bureaucrat::Bureaucrat(std::string name , int grade): _name(name) {
  if (grade < 1)
    this->GradeTooLowException();
  else if(grade > 150)
    this->GradeTooHighException();
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

void   Bureaucrat::GradeTooHighException(){
  throw Bureaucrat::GradeTooHighException::GradeTooHighException("maximum grade 150");
}

void   Bureaucrat::GradeTooLowException(){
  throw Bureaucrat::GradeTooLowException::GradeTooLowException("minimum grade 1");
}

std::string Bureaucrat::getName(void) const{
   return this->_name;
}

int Bureaucrat::getGrade(void) const{
   return this->_grade;
}

void Bureaucrat::setGrade(int grade){
   this->_grade =  grade;
}

void Bureaucrat::gradePlus(void){
  if (this->_grade < 150)
    this->_grade += 1;
  else
    this->GradeTooHighException();
}

void Bureaucrat::gradeMoins(void){
  if (this->_grade > 1)
    this->_grade -= 1;
  else
    this->GradeTooLowException();
}

/* SUBCLASS */

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){
  std::cout << "call destructor GradeTooLowException " << std::endl;
  return;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(std::string  error){
  this->_custoMsg = error;
}

const char*   Bureaucrat::GradeTooHighException::what() const throw(){
  return ("Erreur : GradeTooLowException " + this->_custoMsg).c_str();
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw(){
  std::cout << "call destructor GradeTooLowException " << std::endl;
  return;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(std::string  error){
  this->_custoMsg = error;
}

const char*   Bureaucrat::GradeTooLowException::what() const throw(){
  return ("Erreur : GradeTooLowException " + this->_custoMsg).c_str();
}


/* OPERATORS */


Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs) {
  (void)rhs;
 /*  if (this != &rhs){
      this->_name = rhs.getName();
      this->_grade = rhs.getGrade();
    }*/
  return *this;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs){
  o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
  return o;
}