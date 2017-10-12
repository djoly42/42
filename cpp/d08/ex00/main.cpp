/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 10:26:19 by djoly             #+#    #+#             */
/*   Updated: 2017/10/12 11:31:01 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main (void){
    int     inter[] = { 10, 20 , 30 ,40};

    std::vector<int> myVector (inter , inter + 4);
    std::list<int> myList (inter, inter + 4);
    try {
        std::cout << easyfind(myVector, 20) << std::endl;
        std::cout << easyfind(myList, 20) << std::endl;
        std::cout << easyfind(myVector, 22) << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}