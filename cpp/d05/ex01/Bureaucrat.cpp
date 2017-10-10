/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:30:06 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 18:32:26 by djoly            ###   ########.fr       */
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

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw(){
  *this = src;
  return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw(){
  std::cout << "call destructor GradeTooHighException " << std::endl;
  return;
}
Bureaucrat::GradeTooHighException::GradeTooHighException(std::string  error) throw(){
  this->_custoMsg = error;
}

const char*   Bureaucrat::GradeTooHighException::what() const throw(){
  return ("Erreur : GradeTooHighException " + this->_custoMsg).c_str();
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw(){
  *this = src;
  return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw(){
  std::cout << "call destructor GradeTooLowException " << std::endl;
  return;
}
Bureaucrat::GradeTooLowException::GradeTooLowException(std::string  error) throw(){
  this->_custoMsg = error;
}

const char*   Bureaucrat::GradeTooLowException::what() const throw(){
  return ("Erreur : GradeTooLowException " + this->_custoMsg).c_str();
}


void Bureaucrat::signForm(Form & f){
  if (this->_grade <= f.getGradeSign()){
    f.setSigned(true);
    std::cout << this->_name << " signs : " << f.getName() << std::endl;
  }
  else{
    f.setSigned(false);    
    std::cout << this->_name << " cannot sign : " << f.getName()
    << " because : dont have level " << f.getGradeSign()<< std::endl;
    
  }
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
    if (this != &rhs){
      *this= rhs;
    }
  return *this;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & rhs){
  o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
  return o;
}