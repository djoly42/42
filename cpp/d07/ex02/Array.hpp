/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 10:36:50 by djoly             #+#    #+#             */
/*   Updated: 2017/10/11 18:18:10 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

#include <iostream>

template <typename T>
class Array {
public:
    T            *tab;
    bool            _b;
    
    Array(void){
        std::cout << "call constructor void" << std::endl;
        /*if (this->isConst(this)){
            std::cout << "is const" <<std::endl;
           
        }*/
       this->tab = new T[0]();
       this->_len = 0;
    };

    Array(unsigned int n){
        std::cout << "call constructor n" << std::endl;
        /*if (this->isConst(this)){
            std::cout << "is const" <<std::endl;
            
        }*/
        if(n == 0){
            Array();
        }
        else{       
        this->_len = n;
        this->tab = new T[n]();
        }
    };

    Array(Array const & src){
        /*if (this->isConst(this)){
            std::cout << "is const" <<std::endl;
            
        }*/
        std::cout << "call constructor src" << std::endl;
        
        this->tab = new T[src.size()];
        this->_len = src.size();
        for(unsigned int i = 0; i < this->_len; i++){
            this->tab[i] = src.tab[i];
        }
        
        return ;
    };
   
    virtual ~Array(void){
        //std::cout << "call destructor " << std::endl;
    
        delete [] this->tab ;
        //std::cout << "end destructor " << std::endl<< std::endl;
    };
/*
    bool isConst(Array& x)
    {
        (void)x;
        this->_b = true;
        return false;
    }
    
    bool isConst(Array const& x)
    {
        (void)x;
        this->_b = true;
        return true;
    }
  */  

    unsigned int     size(void) const{
        return this->_len;
    
    };

    Array& operator=(Array const & rhs){
    

        if (this->_len == 0){
            delete this->tab;
        }
        else
            delete [] this->tab;

        this->tab = new T[rhs.size()];
        this->_len = rhs.size();
        for(unsigned int i = 0; i < this->_len; i++){
            this->tab[i] = rhs.tab[i];
        }
        return *this;
    };
  
    T& operator[](unsigned int i)const{
        /*if( this->_b )
            std::cout << " IS CONST " << std::endl;
        */
        if (i >= _len){
            throw std::exception();
        }
        return this->tab[i];
      
    };

private:
    unsigned int    _len;
 

};

template <typename T >
std::ostream &      operator<< (std::ostream & o, Array<T> const & rhs ){
    o << "tab size: ";
    for (unsigned int i = 0; i < rhs.size() ; i++)
        o << " tab["<< i<<"]: " << rhs[i] << " ";
    o << std::endl;
    return o;
}

#endif