/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 17:03:18 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 17:29:26 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int	main() {
	std::srand(std::time(NULL));
	PresidentialPardonForm	Presidential("Presidential");
	RobotomyRequestForm		Robot("Robot");
	ShrubberyCreationForm	Shrubbery("Shrubbery");
	Bureaucrat				auxence("auxence", 12);
	Bureaucrat				le_meilleur("Bob", 1);

	std::cout << "FIRST EXECUTE PRESIDENTIAL WITHOUT SIGN\n\n";
	try {
		auxence.executeForm(Presidential);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
	
	std::cout << "\nSECOND EXECUTE SHRUBERRY WITH SIGN\n\n";
	try {
		auxence.signForm(Shrubbery);
		auxence.executeForm(Shrubbery);
		Shrubbery.execute(auxence);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << "\nTHIRD FAILED PRESIDENTIAL BUT EXECUTE ROBOT\n\n";
	try {
		auxence.signForm(Presidential);
		auxence.signForm(Robot);
		auxence.executeForm(Robot);
		Robot.execute(auxence);
		auxence.executeForm(Presidential);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}

	std::cout << "\n FOURTH EXEC PRESIDENTIAL\n\n";
	try {
		le_meilleur.signForm(Presidential);
		le_meilleur.signForm(Presidential);
		Presidential.execute(le_meilleur);
	}
	catch (std::exception& e) {
		std::cerr << e.what();
	}
}
