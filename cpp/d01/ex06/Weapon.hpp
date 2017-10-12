/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 15:56:39 by djoly             #+#    #+#             */
/*   Updated: 2017/10/03 16:37:03 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon{

public:
	Weapon(std::string  type);
	std::string const &		getType();
	void					setType(std::string type);
	

private:
	std::string 			_type;


};


#endif
