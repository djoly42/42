/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 10:50:22 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 19:07:15 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>


class	Fixed{

public:
	Fixed( void );
	Fixed( int const & i );
	Fixed( float const & f );
	Fixed( Fixed const & src );
	~Fixed( void );
	int			getRawBits( void ) const;
	static int			getEight( void );
	void		setRawBits( int i );
	float		toFloat( void ) const;
	int		toInt( void ) const;
	Fixed&  	operator=( Fixed const & fix);
	Fixed  	   operator++(int);
	Fixed      	operator--(int);
	Fixed&  	operator++(void);
	Fixed&  	operator--(void);

	Fixed 	operator+( Fixed const & fix);
	Fixed  	operator-( Fixed const & fix);
	Fixed 	operator/( Fixed const & fix);
	Fixed  	operator*( Fixed const & fix);
	bool    	operator<( Fixed const & fix);
	bool    	operator>( Fixed const & fix);
	bool    	operator>=( Fixed const & fix);
	bool    	operator<=( Fixed const & fix);
	bool    	operator==( Fixed const & fix);
	bool    	operator!=( Fixed const & fix);
	static Fixed const   	max(Fixed const & fix, Fixed const & fix2);
	static Fixed const   	min(Fixed const & fix, Fixed const & fix2);
	static Fixed    	min(Fixed & fix, Fixed & fix2);
	static Fixed    	max(Fixed & fix, Fixed & fix2);



private:
	int _rawBits;
	static const int _eight = 8;

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);

#endif
