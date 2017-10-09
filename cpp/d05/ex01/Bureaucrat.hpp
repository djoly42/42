/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 13:31:06 by djoly             #+#    #+#             */
/*   Updated: 2017/10/09 17:44:44 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat  {
public:
  Bureaucrat(void);
  Bureaucrat(std::string name, int grade);
  Bureaucrat(Bureaucrat const & src);
  virtual ~Bureaucrat(void);

  void   GradeTooHighException();
  void   GradeTooLowException();
  
  
  std::string getName(void)const;
  void setName(std::string name);  
  int getGrade(void)const;
  void setGrade(int grade);
  
  void gradePlus(void);
  void gradeMoins(void);

  Bureaucrat& operator=(Bureaucrat const & rhs);
  
  class GradeTooHighException : public std::exception{
  public:
    GradeTooHighException(std::string  error);
    virtual ~GradeTooHighException(void)throw();

    virtual const char* what() const throw();

  private:
    GradeTooHighException(void);    
    GradeTooHighException(Bureaucrat const & src);
    std::string   _custoMsg;
  };
  
  class GradeTooLowException : public std::exception{
  public:
    GradeTooLowException(std::string  error);
    virtual ~GradeTooLowException(void)throw();

    virtual const char* what() const throw();

  private:
    GradeTooLowException(void);
    GradeTooLowException(Bureaucrat const & src);
    std::string   _custoMsg;
  };
  

  private:
      std::string const     _name;
      int             _grade;

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs);

#endif
