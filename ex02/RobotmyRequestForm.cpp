/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotmyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:22:35 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/03 17:57:27 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(): AForm("Default RobotmyRequestForm", 72, 45) {
	target_ = "Default RobotmyRequestForm";
}

RobotmyRequestForm::RobotmyRequestForm( const std::string& target ): AForm(target, 72, 45) {
	target_ = target;
}

RobotmyRequestForm::RobotmyRequestForm( const RobotmyRequestForm& obj ): AForm(obj) {
	*this = obj;
}

RobotmyRequestForm&	RobotmyRequestForm::operator=( const RobotmyRequestForm& rhs ) {
	if (this != &rhs) {
		target_ = rhs.target_;
	}
	return *this;
}

RobotmyRequestForm::~RobotmyRequestForm() {
}

void	RobotmyRequestForm::execute( Bureaucrat const & executor ) const {
	execution(executor);
	std::cout << "* VRRRRR BZZZZZZZ VRRRRRRR *\n";
	int x = rand();
	if (x % 2)
		std::cout << target_ << " has been robotomized\n";
	else
		std::cout << "Robotomy failed\n";
}
