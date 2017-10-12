/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 10:26:44 by djoly             #+#    #+#             */
/*   Updated: 2017/10/12 11:31:08 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>  
# include <vector>
# include <exception>
# include <list>


template <typename T>
int    easyfind(T cont, int n){
    typename T::iterator	it = std::find(cont.begin(), cont.end(), n);    
    it = find (cont.begin(), cont.end(), n);
    if (it == cont.end())
        throw std::exception();
    else
        return *it;
}

#endif