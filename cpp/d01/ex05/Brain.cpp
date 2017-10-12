/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:28:26 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 18:53:18 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream> 
#include <string>

Brain::Brain(void){
	return;
}

std::string		Brain::identify() const{
	std::cout << "call identify Brain " << std::endl;	
	const void * address = static_cast<const void*>(this);
	std::stringstream ss;
	ss << address;  
	return ss.str();
}
