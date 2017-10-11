/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 11:22:22 by djoly             #+#    #+#             */
/*   Updated: 2017/10/11 18:16:43 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{

    std::cout << "1/ --- int[5] empty" << std::endl;
    try
    {
        Array<int> ar(5);
        std::cout << ar << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "2/ --- int empty" << std::endl;
    try
    {
        Array<int> ar;
        std::cout << ar << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "3/ --- int[5] fill" << std::endl;

    try
    {
        Array<int> ar(5);

        ar[0] = 0;
        ar[1] = 10;
        ar[2] = 20;
        ar[3] = 30;
        ar[4] = 40;
        std::cout << ar << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "4/ ---string[5] vide" << std::endl;

    try
    {
        Array<std::string> ar(5);
        std::cout << ar << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "5/ --- string[5] fill" << std::endl;

    try
    {
        Array<std::string> ar(3);
        ar[0] = "abc";
        ar[1] = "def";
        ar[2] = "ghi";

        std::cout << ar << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "6/ --- string[] empty" << std::endl;

    try
    {
        Array<std::string> ar;
        std::cout << ar << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "7/ --- int[5] fill" << std::endl;

    try
    {
        Array<int> ar(5);
        ar[0] = 0;
        ar[1] = 10;
        ar[2] = 20;
        ar[3] = 30;
        ar[4] = 40;

        Array<int> ar10(2);
        ar10 = ar;
        Array<int> ar2 = ar;
        Array<int> ar3(ar);
        std::cout << ar;
        std::cout << ar2;
        std::cout << ar3;
        std::cout << ar10;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "8/ --- int[5] fill" << std::endl;
    
        try
        {
            Array<int> ar(5);
            ar[0] = 0;
            ar[1] = 10;
            ar[2] = 20;
            ar[3] = 30;
            ar[4] = 40;
    
            Array<int> ar10(2);
            //ar = ar10;
            Array<int> ar2 = ar;
            Array<int> ar3(ar);
            std::cout << ar;
            std::cout << ar2;
            std::cout << ar3;
            std::cout << ar10;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    return 0;
}