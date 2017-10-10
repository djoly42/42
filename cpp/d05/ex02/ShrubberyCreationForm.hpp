/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:26:46 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 15:49:37 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp" 
# include <fstream>
# include <iostream>
# include <iostream>

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(std::string target);
    
    ShrubberyCreationForm(ShrubberyCreationForm const & src);
    virtual ~ShrubberyCreationForm(void);
    virtual void  execute(Bureaucrat const & executor) const;
    

  ShrubberyCreationForm& operator=(ShrubberyCreationForm const & rhs);

private:
    ShrubberyCreationForm(void);
    

};

#endif