/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:03:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/03 16:58:17 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Default PresiendialPardonForm", 25, 5) {
	target_ = "Default PresidentialPardonForm";
}

PresidentialPardonForm::PresidentialPardonForm( const std::string& target ): AForm(target, 25, 5) {
	target_ = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& obj ): AForm(obj) {
	*this = obj;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=( const PresidentialPardonForm& rhs ) {
	if (this != &rhs) {
		target_ = rhs.target_;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	execution(executor);
	std::cout << target_ << " has been pardoned by Zaphod Beeblebox\n";
}
