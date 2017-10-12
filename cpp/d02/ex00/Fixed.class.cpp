/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 10:51:28 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 18:44:16 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed( void ): _rawBits(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src ){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

void	Fixed::setRawBits( int i ){
	this->_rawBits = i;
	
}
int		Fixed::getRawBits( void ) const{

	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

Fixed &	Fixed::operator=(Fixed const & fix) {
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = fix.getRawBits();
	return *this;
}
/*
int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
*/
