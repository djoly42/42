/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 18:17:08 by djoly             #+#    #+#             */
/*   Updated: 2017/10/09 18:31:34 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* CONSTRUCTORS */

Form::Form(void) {
  return;
}

Form::Form(Form const & src) {
  *this = src;
  return;
}

Form::~Form(void) {
  return;
}

/* MEMBERS */
std::string Form::getName(void)const{
   return this->_name;
}

bool        Form::getSigned(void)const{
    return this->_signed;
}

int Form::getGradeSign(void)const{
   return   this->_gradeSign;
}

void Form::setGradeSign(int gradeSigned){
   this->_gradeSign = gradeSigned;
}

int Form::getGradeExecute(void)const{
   return this->_gradeExecute;
}

void Form::setGradeExecute(int gradeExecute){
   this->_gradeExecute = gradeExecute;
}


/* OPERATORS */

Form& Form::operator=(Form const & rhs) {
  return *this;
}           