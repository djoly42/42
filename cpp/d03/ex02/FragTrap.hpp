/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/05 09:14:04 by djoly             #+#    #+#             */
/*   Updated: 2017/10/05 23:10:25 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src );
	~FragTrap( void );

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
	void		vaulthunter_dot_exe(std::string const & target);

	FragTrap &	operator=( FragTrap const & rhs);

};

#endif
