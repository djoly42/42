/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:00:52 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 19:28:04 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* CONSTRUCTORS */

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form(target, 72, 45) {
  return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src): Form(src) {
  return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
  return;
}

/* MEMBERS */

void  RobotomyRequestForm::execute(Bureaucrat const & executor) const{
  std::cout << "ROR ORORO ROR ORO " << std::endl;
  std::cout << "RORO RORO RORORO " << std::endl;
  std::cout << "RORO ROROROR ORO " << std::endl;
  std::cout << "R ORO RORORO RORO " << std::endl;
  if (rand() % 2 == 0){
     std::cout << this->getName() << " has been robotomized failure."<< std::endl;
    return;
  }
  if (!this->getSigned()){
    std::cout << "Form " << this->getName() <<" not signed" << std::endl;
    std::cout << this->getName() << " has been robotomized failure."<< std::endl;    
    return;
  }
  if (executor.getGrade() > this->getGradeExecute()){
    std::cout << this->getName() << " has been robotomized failure."<< std::endl;    
    throw (GradeTooHighException("erreur in grade, not have permission to execute"));
    return;
  }
  std::cout << this->getName() << " has been robotomized successfully"<< std::endl;
  return ;
}
/* OPERATORS */

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {
  if (this != &rhs)
    *this = rhs;
  return *this;
}   