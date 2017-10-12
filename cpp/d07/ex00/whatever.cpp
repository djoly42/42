/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 09:33:46 by djoly             #+#    #+#             */
/*   Updated: 2017/10/11 09:57:59 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void    swap(T & x, T & y){
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
    return ;
}


template<typename T>
T const &    min(T const & x, T const & y){
    if (x < y)
        return x;
    return y;
}


template<typename T>
T const &    max(T const & x, T const & y){
    if (x > y)
        return x;
    return y;
}

int     main (void){
    
    int a = 5;
    int b = 10;
    std::cout << "swap: " << std::endl;
    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
    char c = 'c';
    char d= 'd';
    std::cout << c << " " << d << std::endl;
    swap(c, d);
    std::cout << c << " " << d << std::endl;
    std::string e = "abc";
    std::string f = "def";
    std::cout << e << " " << f << std::endl;
    swap(e, f);
    std::cout << e << " " << f << std::endl;
    std::cout << std::endl;
    
    std::cout << "min: " << std::endl;
    std::cout << min(a,b) << std::endl;
    std::cout << min(c,d) << std::endl;
    std::cout << ::min(e,f) << std::endl;
    std::cout << std::endl;

    std::cout << "max: " << std::endl;
    std::cout << max(a,b) << std::endl;
    std::cout << max(c,d) << std::endl;
    std::cout << ::max(e,f) << std::endl;
    std::cout << std::endl;
    {
    a = 2;
    b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    return 0;

}
