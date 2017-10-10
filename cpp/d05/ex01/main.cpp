/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 14:24:10 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 13:52:22 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void) {
  try
  {
    Bureaucrat B("BOBO" , 200);
  }
  catch (std::exception & e)
  {
    std::cout << "catch" << std::endl;
    std::cout << e.what() << std::endl;
    
  }
  try
  {
    Bureaucrat B("BOBO" , -5);
  }
  catch (std::exception & e)
  {
    std::cout << "catch" << std::endl;
    std::cout << e.what() << std::endl;
    
  }
  try {
    Form f("toto", 1, 1);
    std::cout << f << std::endl;
    Form g("tata", -1, 1);
    std::cout << g << std::endl;
  }
  catch (std::exception & e)
  {
    std::cout << e.what() << std::endl;    
  }
  try {
    Form g("tata", 1, -21);
    std::cout << g << std::endl;
  }
  catch (std::exception & e)
  {
    std::cout << e.what() << std::endl;    
  }
  try {
    Form g("tata", 221, 2);
    std::cout << g << std::endl;
  }
  catch (std::exception & e)
  {
    std::cout << e.what() << std::endl;    
  }
  try {
    Form g("tata", 1, 200);
    std::cout << g << std::endl;
  }
  catch (std::exception & e)
  {
    std::cout << e.what() << std::endl;    
  }

  Bureaucrat BB("BUBU" , 20);  
  Form f1("papier" , 10, 5);
  Form f2("papier2" , 50, 5);
  std::cout << BB << std::endl;
  std::cout << f1 << std::endl;
  std::cout << f2 << std::endl;
  
  BB.signForm(f1);
  BB.signForm(f2);
  Form f3("papier3" , 10, 5);
  Form f4("papier4" , 50, 5);
  std::cout << f3 << std::endl;
  std::cout << f4 << std::endl;
  try {
    f3.beSigned(BB);
    
  }
  catch (std::exception & e)
  {
    std::cout << e.what() << std::endl;    
  }
  try {
    f4.beSigned(BB);
  }
  catch (std::exception & e)
  {
    std::cout << e.what() << std::endl;    
  }
  Form f5("papier5" , 50, 5);
  std::cout << f5 << std::endl;
  f5.beSigned(BB);
  std::cout << f5 << std::endl;
  
  
  return (0);
}