/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 10:51:28 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 18:48:24 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed( void ): _rawBits(0){
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( int const & i){
    std::cout << "Int constructor called" << std::endl;
    this->_rawBits = (i << getEight() );
}

Fixed::Fixed( float const & f){
    std::cout << "Float constructor called" << std::endl;
    this->_rawBits = roundf(f * (1 << getEight()));
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
	return this->_rawBits;
}
int		Fixed::getEight( void ){
	return Fixed::_eight;
}
float	Fixed::toFloat( void ) const{
    return ((float)this->_rawBits / (1 << getEight()) ); //2^8
}

float	Fixed::toInt( void ) const{
    return (this->_rawBits >> getEight() );
}

Fixed &	Fixed::operator=(Fixed const & fix) {
	std::cout << "Assignation operator called" << std::endl;
	this->_rawBits = fix.getRawBits();
	return *this;
}
std::ostream & operator<<( std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}

/*
int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
*/


