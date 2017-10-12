/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 10:57:39 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 12:59:07 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie {

public:
	Zombie(void);
	~Zombie(void);
	void announce();
	std::string getName(void)const;
	void		setName(std::string n);
	std::string getType(void)const;
	void		setType(std::string t);
private:
	std::string	name;
	std::string	type;
};

#endif
