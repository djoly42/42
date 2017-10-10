/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 18:17:08 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 18:31:42 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* CONSTRUCTORS */

Form::Form(std::string name , int gradeSign, int gradeExecute):_name(name), _signed(false),_gradeSign(gradeSign), _gradeExecute(gradeExecute) {
  if (gradeSign < 1)
    throw (GradeTooLowException("erreur in gradeSign, inferieur a 1"));
  else if (gradeExecute < 1)
    throw (GradeTooLowException("erreur in gradeExecute, inferieur a 1"));
  else if(gradeSign > 150)
    throw (GradeTooHighException("erreur in gradeSign, superieur a 150"));
  else if(gradeExecute > 150)
    throw (GradeTooHighException("erreur in gradeExecute, superieur a 150"));

}

Form::Form(Form const & src): _name(src.getName()), _signed(src.getSigned()),_gradeSign(src.getGradeSign()), _gradeExecute(src.getGradeExecute()){
  return;
}

Form::~Form(void) {
  return;
}

/* MEMBERS */

void Form::beSigned(Bureaucrat & b){
  if (b.getGrade() <= this->_gradeSign){
    b.signForm(*this);
  }
  else
    throw (GradeTooLowException("Bureaucrat dont have grade to sign"));
}

std::string Form::getName(void)const{
   return this->_name;
}
bool        Form::getSigned(void)const{
    return this->_signed;
}

void         Form::setSigned(bool b){
    this->_signed = b;
}


int         Form::getGradeSign(void)const{
   return   this->_gradeSign;
}

int           Form::getGradeExecute(void)const{
   return this->_gradeExecute;
}


/* SUB CLASS */
Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw(){
  *this = src;
  return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw(){
  return;
}
Form::GradeTooHighException::GradeTooHighException(std::string  error) throw(){
  this->_custoMsg = error;
}

const char*   Form::GradeTooHighException::what() const throw(){
  return ("Erreur : GradeTooHighException " + this->_custoMsg).c_str();
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw(){
  *this = src;
  return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw(){
  return;
}
Form::GradeTooLowException::GradeTooLowException(std::string  error) throw(){
  this->_custoMsg = error;
}

const char*   Form::GradeTooLowException::what() const throw(){
  return ("Erreur : GradeTooLowException " + this->_custoMsg).c_str();
}


/* OPERATORS */

Form& Form::operator=(Form const & rhs) {
  if (this != &rhs)
    *this = rhs;
  return *this;
}

std::ostream & operator<<( std::ostream & o, Form const & rhs){
  o << rhs.getName() << ", signed: " << rhs.getSigned()
    << " grade Sign: " << rhs.getGradeSign()
    << " grade Ecexute " << rhs.getGradeExecute() ;
  return o;
}