/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:41:49 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 18:52:38 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void){
	return ;
}


Human::~Human(void){
	return;
}

Brain const &	Human::getBrain(void){
	return (brain);
}

std::string Human::identify(void){
	std::cout << "call identify human " << std::endl;	
	return (brain.identify());
}
