/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:03:18 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 17:40:59 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main() {
	try {
		Intern someRandomIntern;
		AForm* rrf = NULL;
		
		rrf = someRandomIntern.makeForm("robotomy request", "Moi");
		std::cout << rrf->getName() << "\n";
		delete	rrf;
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Intern someRandomIntern;
		AForm* rrf = NULL;
	
		rrf = someRandomIntern.makeForm("presidential pardon", "lui");
		std::cout << rrf->getName() << "\n";
		delete	rrf;
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Intern someRandomIntern;
		AForm* rrf = NULL;

		
		rrf = someRandomIntern.makeForm("shrubbery creation", "nous");
		std::cout << rrf->getName() << "\n";
		delete	rrf;
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	try {
		Intern someRandomIntern;
		AForm* rrf = NULL;
		
		rrf = someRandomIntern.makeForm("dsa request", "mauvais");
		std::cout << rrf->getName() << "\n";
		delete	rrf;
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
}
