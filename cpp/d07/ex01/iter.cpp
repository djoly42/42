/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 09:59:45 by djoly             #+#    #+#             */
/*   Updated: 2017/10/12 09:59:36 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


// pointeur de fonction sur argument constant
template< typename T>
void        iter(T * add, int  len , void(*funct)(T const &) ){
   for ( int i=0; i < len; i++){
       funct(add[i]);
   }
}

// pointeur de fonction sur argument non constant
template< typename T>
void        iter(T * add, int  len , void(*funct)(T &) ){
   for ( int i=0; i < len; i++){
       funct(add[i]);
   }
}

// fonction qui modifie l arg
void plus(int & i){
    ++i;
    return ;
}

void upper(char & i){
    i = toupper(i);
    return ;
}


// fonction const
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }


class Awesome {
    
    public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
    
    private:
    int _n;};

    std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }


    
int     main(void){

    int tab3[] = {10,20,30,40};
    for(unsigned long i = 0; i < 4; i++){
        std::cout << "tab3[" << i << "]: " <<  tab3[i] << ", ";
    }
    std::cout << std::endl;
    ::iter(tab3, 4, plus);
    for(unsigned long i = 0; i < 4; i++){
        std::cout << "tab3[" << i << "]: " <<  tab3[i] << ", ";
    }
    std::cout << std::endl << std::endl;


    char tab4[] = {'a' ,'b', 'c', 'd'};
    for(unsigned long i = 0; i < 4; i++){
        std::cout << "tab[" << i << "]: " <<  tab4[i] << ", ";
    }
    std::cout << std::endl;
    iter(tab4, 4, upper);
    for(unsigned long i = 0; i < 4; i++){
        std::cout << "tab[" << i << "]: " <<  tab4[i] << ", ";
    }
    std::cout << std::endl;

    int tab[] = { 0, 1, 2, 3, 4 }; 
    Awesome tab2[5];
    
    ::iter( tab, 5, print );
    ::iter( tab2, 5, print );
    
    return 0;
}