/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 14:24:10 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 17:29:11 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main(void) {
  std::srand(std::time(NULL) + std::clock());
  
 std::cout << "1/------------" << std::endl;
  Bureaucrat BB("BUBU" , 2);  
  try {
  ShrubberyCreationForm SCF("AAAAA");
  SCF.beSigned(BB);
  SCF.execute(BB);
  }
  catch (std::exception &e){

    std::cout << e.what() << std::endl;
  }
  std::cout << "2/------------" << std::endl;
  
  try{
 
    Bureaucrat BB("BOBO" , 147);  
    ShrubberyCreationForm SCF("BBBBB");
    SCF.beSigned(BB);
    //SCF.execute(BB);
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }

  std::cout << "3/------------" << std::endl;
  
  try{
 
    Bureaucrat BB("BIBI" , 1);  
    RobotomyRequestForm BRF("CCCC");
    BRF.beSigned(BB);
    //SCF.execute(BB);
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }
  std::cout << "4/------------" << std::endl;
  
  try{
 
    Bureaucrat BB("BYBY" , 148);  
    RobotomyRequestForm BRF("CCCC");
    BRF.beSigned(BB);
    //SCF.execute(BB);
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }
  std::cout << "3/------------" << std::endl;
  
  try{
 
    Bureaucrat BB("BIBI" , 1);  
    RobotomyRequestForm BRF("CCCC");
    BRF.beSigned(BB);
    //SCF.execute(BB);
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }

  std::cout << "5/------------" << std::endl;
  
  try{
 
    Bureaucrat BB("BIBI" , 1);  
    PresidentialPardonForm PPF("CCCC");
    //PPF.beSigned(BB);
    BB.signForm(PPF);
    //SCF.execute(BB);
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }


  std::cout << "6/------------" << std::endl;
  
  try{
 
    Bureaucrat BB("BIBI" , 145);  
    PresidentialPardonForm PPF("CCCC");
    PPF.beSigned(BB);
    //SCF.execute(BB);
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }
  std::cout << "7/------------" << std::endl;
  
  try{
 
    Intern II;
    Form * f= II.makeForm("robotomy request", "robotomyCREATION");  
    std::cout << *f << std::endl;
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }

  std::cout << "8/------------" << std::endl;
  
  try{
 
    Intern II;
    Form * f= II.makeForm("Shrubbery creation", "ShrubberyCREATION");  
    std::cout << *f << std::endl;
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }
  std::cout << "9/------------" << std::endl;
  
  try{
 
    Intern II;
    Form * f= II.makeForm("presidential pardon", "PresidentialCREATION");  
    std::cout << *f << std::endl;
  }
  catch (std::exception & e){
    std::cout << e.what() << std::endl;
    
  }
  std::cout << "10/------------" << std::endl;
  try{
    
    Intern II;
    Form * f= II.makeForm("MAMACITA", "PresidentialCREATION");  
    if(f)
      std::cout << *f << std::endl;
    else
      std::cout << "ptr null" << std::endl;
     }
     catch (std::exception & e){
       std::cout << e.what() << std::endl;
       
     }
  return (0);
}