/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 10:36:50 by djoly             #+#    #+#             */
/*   Updated: 2017/10/11 16:23:33 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

#include <iostream>

template <typename U>
class Array {
public:
    U            *tab;
    
    Array(void){
        std::cout << "call constructor void" << std::endl;
        
       this->tab = new U();
       this->_len = 0;
   };

    Array(unsigned int n){
        std::cout << "call constructor n" << std::endl;
        
        if(n == 0){
            Array();
        }
        else{       
        this->_len = n;
        this->tab = new U[n]();
        
    }
   };

    Array(Array const & src){
        std::cout << "call constructor src" << std::endl;
        
        this->tab = new U[src.getLen()];
        this->_len = src.getLen();
        for(unsigned int i; i < this->_len; i++){
            this->tab[i] = src.tab[i];
        }
        
        return ;
    };
   
    virtual ~Array(void){
        std::cout << "call destructor " << std::endl;

        delete [] this->tab ;
        std::cout << "end destructor " << std::endl;
    };

    unsigned int     size(void) const{
        return this->_len;
    
    };

    Array& operator=(Array const & rhs){
        this->tab = new U[rhs.size()];
        this->_len = rhs.size();
        for(unsigned int i = 0; i < this->_len; i++){
            this->tab[i] = rhs.tab[i];
        }
        return *this;
    };
  
    U& operator[](unsigned int i){
        if (i >= _len){
            throw std::exception();
        }
        return this->tab[i];
      
    };

private:
    unsigned int    _len;

};
/*
std::ostream &      operator<< (std::ofstream & o, Array<T> const & rhs ){
    for (unsigned int i = 0; i < rhs.size() ; i++)
        o << "tab["<< i<<"]: " << rhs[i] << " ";
    o << std::endl;
    return 0;
}*/

#endif