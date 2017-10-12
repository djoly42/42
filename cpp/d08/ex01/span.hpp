/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 11:35:38 by djoly             #+#    #+#             */
/*   Updated: 2017/10/12 12:20:43 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP
#include <list>
#include <iostream>

class span {
public:
    span(unsigned int n);
    span(span const & src);
    ~span(void);

    void    addNumber(int n);
    int     shortestSpan(void);
    int     longestSpan(void);
    
    span&   operator=(span const & rhs);

  
    class         myException : public std::exception{
    public:
        myException(std::string  error);
        myException(myException const & src);      
        virtual ~myException(void)throw();
        virtual const char* what() const throw() ;
        myException& operator=(myException const & rhs);
      
    private:
        myException(void);    
        std::string   _custoMsg;
  };
private:
    span(void);
    unsigned int    _cur;
    unsigned int    _max;
    
    std::list<int>  _list;
};

#endif