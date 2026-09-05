/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 16:17:02 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 17:35:41 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {
	return ;
}

Intern::Intern( const Intern& obj ) {
	*this = obj;
	return ;
}

Intern&	Intern::operator=( const Intern& rhs ) {
	(void)rhs;
	return	*this;
}

Intern::~Intern() {
	return ;
}

AForm*	Intern::makeForm( const std::string& name, const std::string& target ) {
	std::string	str[] = {
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};

	int i = 0;
	while (i < 3 && str[i] != name)
		i++;

	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << name << "\n";
		return new RobotomyRequestForm(target);
	case 1:
		std::cout << "Intern creates " << name << "\n";
		return new	PresidentialPardonForm(target);
	case 2:
		std::cout << "Intern creates " << name << "\n";
		return new	ShrubberyCreationForm(target);
	default:
		throw	Intern::InternBadStr();
	}
}
