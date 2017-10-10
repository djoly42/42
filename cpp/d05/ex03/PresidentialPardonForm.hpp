/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:06:33 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 17:24:46 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(std::string target);
  
   PresidentialPardonForm(PresidentialPardonForm const & src);
   virtual ~PresidentialPardonForm(void);
   virtual void  execute(Bureaucrat const & executor) const;
   

  PresidentialPardonForm& operator=(PresidentialPardonForm const & rhs);
private:
  PresidentialPardonForm(void);
  

};

#endif