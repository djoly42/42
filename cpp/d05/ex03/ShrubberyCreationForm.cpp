/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:28:21 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 19:28:34 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/* CONSTRUCTORS */

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form(target, 145, 137) {
    

   return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src): Form(src) {
  *this = src;
  return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
  return;
}



/* MEMBERS */

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
  if (!this->getSigned()){
    std::cout << "Form " << this->getName() <<" not signed" << std::endl;
    return;
  }
  if (executor.getGrade() > this->getGradeExecute()){
    throw (GradeTooHighException("erreur in grade, not have permission to execute"));
    return;
  }
  std::string fileName = (this->getName()+ "_shrubbery"); 
  std::ofstream newFile;
  newFile.open(fileName.c_str());
  if(newFile.is_open()){
    newFile << "               v .   ._, |_  .," << std::endl
            <<"   `-._\\/  .  \\ /    |/_" << std::endl
            <<"       \\  _\\, y | \\//" << std::endl
            <<" _\\_.___\\, \\/ -.\\||" << std::endl
            <<"   `7-,--.`._||  / / ," << std::endl
            << "   /'     `-. `./ / |/_.'" << std::endl
            << "             |    |//" << std::endl
            << "             |_    /" << std::endl
            << "             |-   |" << std::endl
            << "             |   =|" << std::endl
            << "             |    |" << std::endl
            << "--------------------/ ,  . \\--------._ " << std::endl;

    
  }
  else{
    std::cout << "file not oopen " << std::endl;
  }
  newFile.close();  
  return ;
}

/* OPERATORS */

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs) {
  if (this != &rhs)
    *this = rhs;
  return *this;
}