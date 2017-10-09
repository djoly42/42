/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 18:17:11 by djoly             #+#    #+#             */
/*   Updated: 2017/10/09 18:31:35 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form {
public:
    Form(void);
    Form(Form const & src);
    virtual  ~Form(void);

    std::string getName(void)const;
    bool        getSigned(void)const;
    int getGradeSign(void)const;
    void setGradeSign(int gradeSigned);
    int getGradeExecute(void)const;
    void setGradeExecute(int gradeExecute);


    Form& operator=(Form const & rhs);

private:
    std::string const   _name;
    bool const          _signed;
    int                 _gradeSign;
    int                 _gradeExecute;
    
};

#endif