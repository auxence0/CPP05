/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 16:17:02 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/04 16:53:41 by asauvage         ###   ########.fr       */
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

AForm*	Intern::makeForm( std::string name, std::string target ) {
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
		return new RobotmyRequestForm(target);
		break;
	case 1:
		return new	PresidentialPardonForm(target);
		break;
	case 2:
		return new	ShrubberyCreationForm(target);
		break;
	default:
		throw	Intern::InternBadStr();
	}
}
