/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:03:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 17:45:27 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Default PresiendialPardonForm", 25, 5), target_("Default PresidentialPardonForm") {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ): AForm(target, 25, 5), target_(target) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj ): AForm(obj), target_(obj.target_) {
	return ;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs ) {
	if (this != &rhs) {
		target_ = rhs.target_;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	execution(executor);
	std::cout << target_ << " has been pardoned by Zaphod Beeblebox\n";
}
