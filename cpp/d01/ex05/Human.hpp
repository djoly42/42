/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/03 14:36:49 by djoly             #+#    #+#             */
/*   Updated: 2017/10/04 13:10:32 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human{

public:
	std::string identify(void);
	Brain const &		getBrain(void);
	Human(void);
	~Human(void);

private:
	Brain const		brain;

};

#endif
