/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djoly <djoly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/10 14:00:48 by djoly             #+#    #+#             */
/*   Updated: 2017/10/10 15:41:28 by djoly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(std::string target);    
   RobotomyRequestForm(RobotomyRequestForm const & src);
   virtual ~RobotomyRequestForm(void);
   virtual void  execute(Bureaucrat const & executor) const;
   

    RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);
private:
    RobotomyRequestForm(void);
    
};

#endif