/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:31:06 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 13:36:24 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat  {
public:
  Bureaucrat(std::string name, int grade);
  Bureaucrat(Bureaucrat const & src);
  virtual ~Bureaucrat(void);

  
  std::string getName(void)const;
  int getGrade(void)const;
  
  void gradePlus(void);
  void gradeMoins(void);

  Bureaucrat& operator=(Bureaucrat const & rhs);
  
  class GradeTooHighException : public std::exception{
    public:
      GradeTooHighException(std::string  error);
      GradeTooHighException(GradeTooHighException const & src);      
      virtual ~GradeTooHighException(void)throw();
      virtual const char* what() const throw() ;
      GradeTooHighException& operator=(GradeTooHighException const & rhs);
      

    private:
      GradeTooHighException(void);    
      std::string   _custoMsg;
  };
  
  class GradeTooLowException : public std::exception{
    public:
      GradeTooLowException(std::string  error);
      GradeTooLowException(GradeTooLowException const & src);      
      virtual ~GradeTooLowException(void)throw();
      virtual const char* what() const throw() ;
      GradeTooLowException& operator=(GradeTooLowException const & rhs);
      

    private:
      GradeTooLowException(void);
      std::string   _custoMsg;
  };
  

  private:
      Bureaucrat(void);
      std::string const     _name;
      int             _grade;

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs);

#endif
