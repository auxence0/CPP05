/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:22:35 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 17:46:30 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("Default RobotomyRequestForm", 72, 45), target_("Default RobotomyRequestForm") {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const std::string& target ): AForm(target, 72, 45), target_(target) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& obj ): AForm(obj), target_(obj.target_) {
	return ;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=( const RobotomyRequestForm& rhs ) {
	if (this != &rhs) {
		target_ = rhs.target_;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	execution(executor);
	std::cout << "* VRRRRR BZZZZZZZ VRRRRRRR *\n";
	int x = rand();
	if (x % 2)
		std::cout << target_ << " has been robotomized\n";
	else
		std::cout << "Robotomy failed\n";
}
