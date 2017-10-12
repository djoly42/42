/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 19:26:10 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 19:12:08 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Human.hpp"

int		main(void){
	Human human = Human();
	std::cout << "call meleeAttack  action on eren" << std::endl ;
	human.action("meleeAttack", "eren");
	std::cout << "call rangedAttack  action on Zaz" << std::endl ;
	human.action("rangedAttack", "Zaz");
	return 0;
}
