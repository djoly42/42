/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 10:51:28 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 19:08:01 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"
#include <cmath>

Fixed::Fixed( void ): _rawBits(0){
	return;
}

Fixed::Fixed( int const & i){
    this->_rawBits = (i << getEight() );
}

Fixed::Fixed( float const & f){
    this->_rawBits = roundf(f * (1 << getEight()));
}

Fixed::~Fixed( void ){
	return;
}

Fixed::Fixed( Fixed const & src ){
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

int	Fixed::toInt( void ) const{
    return (this->_rawBits >> getEight() );
}

Fixed &	Fixed::operator=(Fixed const & fix) {
	this->_rawBits = fix.getRawBits();
	return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed copy(*this);
    ++(*this);
    return copy;
}

Fixed 	Fixed::operator--(int) {
	return Fixed(this->toFloat() - 1);
}

Fixed& 	Fixed::operator++(void) {
    this->_rawBits += 1;
    return *this;
}

Fixed&	Fixed::operator--(void) {
    this->_rawBits -= 1;
    return *this;
}

Fixed 	Fixed::operator+( Fixed const & fix){
    Fixed copy;
    copy.setRawBits(this->getRawBits() + fix.getRawBits());
    return copy;
    //return Fixed(this->toFloat() + fix.toFloat());
}

Fixed 	Fixed::operator-(Fixed const & fix){
    Fixed copy;
    copy.setRawBits(this->getRawBits() - fix.getRawBits());
    return copy;
}


Fixed 	Fixed::operator/( Fixed const & fix){
    if (fix.getRawBits() == 0){
        std::cout << "error division " << std::endl;
        return Fixed();
    }
    else
        return Fixed(this->toFloat() / fix.toFloat());
}
Fixed 	Fixed::operator*( Fixed const & fix){
    return Fixed(this->toFloat() * fix.toFloat());
}

Fixed const   Fixed::min(Fixed const & fix, Fixed const & fix2) {
    if (fix.getRawBits() < fix2.getRawBits())
        return fix;
    else
        return fix2;
}
Fixed const	Fixed::max(Fixed const & fix, Fixed const & fix2) {
    if (fix.getRawBits() < fix2.getRawBits())
        return fix2;
    else
        return fix;
}

Fixed   Fixed::min(Fixed & fix, Fixed  & fix2) {
    if (fix.getRawBits() < fix2.getRawBits())
        return fix;
    else
        return fix2;
}
Fixed	Fixed::max(Fixed & fix, Fixed & fix2) {
    if (fix.getRawBits() < fix2.getRawBits())
        return fix2;
    else
        return fix;

}
bool	Fixed::operator<(Fixed const & fix) {
    return (this->getRawBits() < fix.getRawBits());
}

bool	Fixed::operator>(Fixed const & fix) {
    return (this->getRawBits() > fix.getRawBits());
}

bool	Fixed::operator<=(Fixed const & fix) {
    return (this->getRawBits() <= fix.getRawBits());
}

bool	Fixed::operator>=(Fixed const & fix) {
    return (this->getRawBits() >= fix.getRawBits());
}

bool	Fixed::operator==(Fixed const & fix) {
    return (this->getRawBits() == fix.getRawBits());
}

bool	Fixed::operator!=(Fixed const & fix) {
    return (this->getRawBits() != fix.getRawBits());
}

std::ostream & operator<<( std::ostream & o, Fixed const & rhs){
    o << rhs.toFloat();
    return o;
}


int main( void ) {


Fixed k;
Fixed  l( Fixed( 5.05f ) * Fixed( 2 ) );

Fixed c(1.1f);
Fixed d(2.2f);
Fixed e(3);
Fixed f(4);

std::cout << "k toInt:   " << k.toInt() << std::endl;
std::cout << "k toFloat: " << k.toFloat() << std::endl;

std::cout << "l toInt:   " << l.toInt() << std::endl;
std::cout << "l toFloat: " << l.toFloat() << std::endl;

std::cout << "c toInt:   " << c.toInt() << std::endl;
std::cout << "c toFloat: " << c.toFloat() << std::endl;

std::cout << "d toInt:   " << d.toInt() << std::endl;
std::cout << "d toFloat: " << d.toFloat() << std::endl;

std::cout << "e toInt:   " << e.toInt() << std::endl;
std::cout << "e toFloat: " << e.toFloat() << std::endl;

std::cout << "f toInt:   " << f.toInt() << std::endl;
std::cout << "f toFloat: " << f.toFloat() << std::endl;

std::cout << "k+l : " << (k + l ) << std::endl;
std::cout << "d+e : " << (d + e ) << std::endl;
std::cout << "c+d : " << (c + d ) << std::endl;
std::cout << "c-l : " << (c - l) << std::endl;
std::cout << "l/c : " << (l / c) << std::endl;
std::cout << "l*c : " << (l * c) << std::endl;
std::cout << "++k : " << ++k << std::endl;
std::cout << "l++ : " << l++ << std::endl;

std::cout << "(l < c) : "<< (l < c) << std::endl;
std::cout << "(c < l) : "<< (c < l) << std::endl;


std::cout << k << std::endl;
std::cout << ++k << std::endl;
std::cout << k << std::endl;
std::cout << k++ << std::endl;
std::cout << k << std::endl;
std::cout << l << std::endl;
std::cout << Fixed::max( k, l ) << std::endl;


std::cout << "10/2 : " << (Fixed(10) / Fixed(2)) << std::endl;
std::cout << "10.1/2.1 : " << (Fixed(10.1f) / Fixed(2.1f)) << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

