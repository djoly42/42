/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:14:47 by djoly             #+#    #+#             */
/*   Updated: 2017/10/03 10:38:18 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony{

public:
	Pony(std::string n, int nbPow, std::string c);
	~Pony(void);
	


private:
	std::string		_color;
	std::string		_name;
	int				_paw;


};

#endif
