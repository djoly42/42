/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/04 10:50:22 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 11:48:49 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP
# include <iostream>


class	Fixed{

public:
	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );
	int			getRawBits( void ) const;
	void		setRawBits( int i );
	Fixed & 	operator=( Fixed const & fix);



private:
	int _rawBits;
	static const int _eight = 8;

};




#endif
