/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 09:36:51 by djoly             #+#    #+#             */
/*   Updated: 2017/10/02 10:25:38 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int ac, char **av){
	int i;
	int	j;

	i = 1;
	j = 0;
	if (ac == 1){
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	while(i < ac){
		while(av[i][j] != '\0'){

		std::cout << (char)toupper(av[i][j]);
		j++;
		}
		j = 0;
		i++;
	}
		std::cout << '\n';
	return 0;

}
