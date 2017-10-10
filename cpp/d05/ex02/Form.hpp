/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 18:17:11 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 18:26:17 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
    Form(std::string name , int gradeSign, int gradeExecute);
    Form(Form const & src);
    virtual  ~Form(void);

    void        beSigned(Bureaucrat & b);
    std::string getName(void)const;
    bool        getSigned(void)const;
    void        setSigned(bool b);
    bool        getExecuted(void)const;
    void        setExecuted(bool b);

    int         getGradeSign(void)const;
    int         getGradeExecute(void)const;
    virtual void  execute(Bureaucrat const & executor) const = 0;

    Form& operator=(Form const & rhs);

    class GradeTooHighException : public std::exception{
        public:
        GradeTooHighException(std::string  error);
        GradeTooHighException(GradeTooHighException const & src)throw();      
        virtual ~GradeTooHighException(void)throw();
        virtual const char* what() const throw();

        Bureaucrat& operator=(Bureaucrat const & rhs);
        

        private:
        GradeTooHighException(void);    
        std::string   _custoMsg;
    };
  
  class GradeTooLowException : public std::exception{
    public:
      GradeTooLowException(std::string  error);
      GradeTooLowException(GradeTooLowException const & src)throw();      
      virtual ~GradeTooLowException(void)throw();
      virtual const char* what() const throw();

      Bureaucrat& operator=(Bureaucrat const & rhs);
      

    private:
      GradeTooLowException(void);
      std::string   _custoMsg;
  };
  

private:
    std::string const   _name;
    bool                _signed;
    int const           _gradeSign;
    int const           _gradeExecute;
    bool                _executed;

    Form(void);
    
    
};

std::ostream &	operator<<( std::ostream & o, Form const & rhs);


#endif