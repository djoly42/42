/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 10:36:50 by djoly             #+#    #+#             */
/*   Updated: 2017/10/12 10:04:24 by djoly            ###   ########.fr       */
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
       this->tab = new T[0]();
       this->_len = 0;
    };

    Array(unsigned int n){
        if(n == 0){
            Array();
        }
        else{       
        this->_len = n;
        this->tab = new T[n]();
        }
    };

    Array(Array const & src){        
        this->tab = new T[src.size()];
        this->_len = src.size();
        for(unsigned int i = 0; i < this->_len; i++){
            this->tab[i] = src.tab[i];
        }
        
        return ;
    };
   
    virtual ~Array(void){
        delete [] this->tab ;
    };

    bool isConst(Array &x)
    {
	    std::cout << "CONST FALSE" << std::endl;
        (void)x;
        this->_b = false;
        return false;
    }
    
    bool isConst(Array const& x)
    {
	    std::cout << "CONST TRUE" << std::endl;
        (void)x;
        this->_b = true;
        return true;
    }
  

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
