/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 12:00:29 by djoly             #+#    #+#             */
/*   Updated: 2017/10/12 12:22:49 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include "span.hpp"

/* CONSTRUCTORS */

span::span(unsigned int n): _cur(0), _max(n){
    return;
}

span::span(span const & src) {
    *this = src;
    return;
}

span::~span(void) {
    return;
}

/* MEMBERS */

void    span::addNumber(int n){
    if (this->_cur == this->_max)
        throw span::myException("addNumber: list full");
    this->_cur += 1;
    this->_list.push_back(n);

}


/* OPERATORS */

span&    span::operator=(span const & rhs) {
    return *this;
}   