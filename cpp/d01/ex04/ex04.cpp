/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:19:42 by djoly             #+#    #+#             */
/*   Updated: 2017/10/03 14:24:33 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main( void ){
	std::string		str = "HI THIS IS BRAIN";
	std::string&	strRef = str;
	std::string		*strPtr = NULL;

	strPtr = &str;

	std::cout << "str " << str << std::endl;
	std::cout << "strRef " << strRef << std::endl;
	std::cout << "strPtr " << *strPtr << std::endl;

	return 0;
}
