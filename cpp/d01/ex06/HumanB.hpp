/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:03:38 by djoly             #+#    #+#             */
/*   Updated: 2017/10/03 17:15:39 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB{

public:
	HumanB(std::string name);
	void	setWeapon(Weapon & weapon);
	void	attack(void);

private:
	Weapon *  		_weapon;
	std::string		_name;

};

#endif
