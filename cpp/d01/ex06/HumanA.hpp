/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 16:03:38 by djoly             #+#    #+#             */
/*   Updated: 2017/10/03 16:34:57 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA{

public:
	HumanA(std::string name, Weapon& weapon);
	void	attack(void);

private:
	Weapon& 		_weapon;
	std::string		_name;

};

#endif
