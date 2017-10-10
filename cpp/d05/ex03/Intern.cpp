#include "Intern.hpp"

/* CONSTRUCTORS */

Intern::Intern(void) {
  return;
}

Intern::Intern(Intern const & src) {
  *this = src;
  return;
}

Intern::~Intern(void) {
  return;
}

/* MEMBERS */

Form* Intern::makeForm(std::string formName , std::string name){
  Form * ret;
  if(formName == "robotomy request")
    ret = new RobotomyRequestForm(name);
  else if (formName == "Shrubbery creation")
    ret = new ShrubberyCreationForm(name);
  else if (formName == "presidential pardon")
    ret = new PresidentialPardonForm(name);  
  else{
    std::cout << "heuuu PLS " << std::endl;
    return NULL;
  }
  std::cout << "Intern creates " << name << std::endl;
  return ret;
}



/* OPERATORS */

Intern& Intern::operator=(Intern const & rhs) {
  if(this != &rhs)
    *this = rhs;
  return *this;
}