/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:14:57 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 09:39:28 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string n, int nbPaw, std::string c) : _color(c), _name(n), _paw(nbPaw){
	std::cout << c << " pony " << n << " is born with " << _paw << " paw" << std::endl;
	return ;
}

Pony::~Pony(){
	std::cout << "Pony " << this->_name << " dies in horrible suffering " << " RIP " << std::endl;
	return;
}
