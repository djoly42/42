/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 15:16:27 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 18:27:55 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/* CONSTRUCTORS */

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form(target, 25, 5) {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src): Form(src) {
  *this = src;
  return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
  return;
}

/* MEMBERS */

void  PresidentialPardonForm::execute(Bureaucrat const & executor) const{
  if (executor.getGrade() > this->getGradeExecute()){
    throw (GradeTooHighException("erreur in grade, not have permission to execute"));
    return;
  }
  std::cout << executor.getName() << " has been pardoned by Zafod Beeblebrox "<< std::endl;
 
  
  return ;
}

/* OPERATORS */

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {
  if (this != &rhs)
    *this = rhs;
  return *this;
}