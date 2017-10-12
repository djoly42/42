/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 13:57:31 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 18:48:00 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieHorde.hpp"

int		main(void){
	std::cout << "create horde " << std::endl;
	ZombieHorde		horde = ZombieHorde(10);
	std::cout << "horde created " << std::endl;
	std::cout << "announce horde " << std::endl;
	horde.announce();
	return 0;
}
