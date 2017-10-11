/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:22:22 by djoly             #+#    #+#             */
/*   Updated: 2017/10/11 16:27:15 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"


int     main(void){


    std::cout << "1/ ---" << std::endl;
    {
        Array<int> ar(5);
        std::cout << "size: " <<ar.size() << std::endl;
        try {
            for (unsigned int i = 0; i < ar.size() ; i++)
            std::cout << "tab["<< i<<"]: " << ar[i] << " ";
        std::cout << std::endl;
        }
        catch (std::exception & e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        
    }


    std::cout << "2/ ---" << std::endl;
    {
        Array<int> ar;
        std::cout << "size: " <<ar.size() << std::endl;
        try {
            for (unsigned int i = 0; i < ar.size() ; i++)
            std::cout << "tab["<< i<<"]: " << ar[i] << " ";
        std::cout << std::endl;
        }
        catch (std::exception & e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        
    }


    std::cout << "3/ ---" << std::endl;
    {
        Array<int> ar(5);
        
        ar[0] = 0;
        ar[1] = 10;
        ar[2] = 20;
        ar[3] = 30;
     
        std::cout << "size: " <<ar.size() << std::endl;
        try {
            for (unsigned int i = 0; i < ar.size() ; i++)
                std::cout << "tab["<< i<<"]: " << ar[i] << " ";
        std::cout << std::endl;
        }
        catch (std::exception & e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        
    }
    std::cout << "4/ ---" << std::endl;
    {
        Array<std::string> ar(5);
        std::cout << "size: " <<ar.size() << std::endl;
        try {
            for (unsigned int i = 0; i < ar.size() ; i++)
            std::cout << "tab["<< i<<"]: " << ar[i];
        std::cout << std::endl;
        }
        catch (std::exception & e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        
    }

    std::cout << "5/ ---" << std::endl;
    {
        Array<std::string> ar(3);
        ar[0] = "abc";
        ar[1] = "def";
        ar[2] = "ghi";
        std::cout << "size: " <<ar.size() << std::endl;
        try {
            for (unsigned int i = 0; i < ar.size() ; i++)
            std::cout << "tab["<< i<<"]: " << ar[i] << " ";
        std::cout << std::endl;
        }
        catch (std::exception & e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        
    }

    std::cout << "6/ ---" << std::endl;
    {
        Array<std::string> ar;
        std::cout << "size: " <<ar.size() << std::endl;
        try {
            for (unsigned int i = 0; i < ar.size() ; i++)
            std::cout << "tab["<< i<<"]: " << ar[i] << " ";
        std::cout << std::endl;
        }
        catch (std::exception & e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        
    }
    return 0;
}