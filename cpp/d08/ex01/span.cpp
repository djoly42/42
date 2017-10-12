/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 12:00:29 by djoly             #+#    #+#             */
/*   Updated: 2017/10/12 12:22:49 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include "Span.hpp"

/* CONSTRUCTORS */

Span::Span(unsigned int n): _cur(0), _max(n), _short(-1), _long(-1){
    return;
}

Span::Span(Span const & src) {
    *this = src;
    return;
}

Span::~Span(void) {
    return;
}

/* MEMBERS */

void    Span::addNumber(int n){
    if (this->_cur == this->_max)
        throw Span::myException("addNumber: list full");
    this->_cur += 1;
    this->_tab.push_back(n);
    std::sort(this->_tab.begin(), this->_tab.end());

    if (this->_cur > 1){
        std::vector<int>::iterator it;
        it = find (this->_tab.begin(), this->_tab.end(), n);
        if (n - *(it-1) < this->_short)
            this->_short= n - *(it-1);
        else if(it[1] - n)
            this->_short = it[1] - n;
        this->_long = this->_tab.back() - this->_tab.front();
        std::cout << "back " << this->_tab.back() << " front " << this->_tab.front() << " _long " << this->_long << std::endl;
    }
}

int     Span::shortestSpan(void){
    return this->_short;
}

int     Span::longestSpan(void){
    return this->_long;
}
/* SUBCLASS */

Span::myException::myException(myException const & src) {
    *this = src;
    return;
  }
  
Span::myException::~myException(void) throw(){
    return;
  }
Span::myException::myException(std::string  error) {
    this->_custoMsg = error;
  }
  
const char*   Span::myException::what() const throw(){
    return ("Erreur : GradeTooHighException " + this->_custoMsg).c_str();
  }
  

/* OPERATORS */
Span::myException& Span::myException::operator=(myException const & rhs){
    (void)rhs;
    
    return *this;
  }
Span&    Span::operator=(Span const & rhs) {
    return *this;
}   