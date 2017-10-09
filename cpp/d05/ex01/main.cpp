/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 14:24:10 by djoly             #+#    #+#             */
/*   Updated: 2017/10/09 18:04:26 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void) {
  Bureaucrat B("BOBO" , 25);
  std::cout << B << std::endl;
  B.gradePlus();
  std::cout << B << std::endl;

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
    Bureaucrat B("BOBO" , 5);
    while(1){
      B.gradeMoins();
      std::cout << B << std::endl;
       
    }
  }
  catch (std::exception & e)
  {
    std::cout << "catch" << std::endl;
    std::cout << e.what() << std::endl;
    
  }
  return (0);
}