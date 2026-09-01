/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:12:58 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/01 12:10:24 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name_("Default"), grade_(1) {
	return ;
}

Bureaucrat::Bureaucrat( std::string	name, int grade ): name_(name), grade_(grade) {
	if (grade < 1)
		throw	Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw	Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj ) {
	*this = obj;
	return ;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& rhs ) {
	grade_ = rhs.grade_;
	return	*this;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

std::string	Bureaucrat::getName() {
	return name_;
}

int	Bureaucrat::getGrade() {
	return grade_;
}

void	Bureaucrat::decrement() {
	grade_++;
	if (grade_ > 150)
		throw	Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::increment() {
	grade_--;
	if (grade_ < 1)
		throw	Bureaucrat::GradeTooHighException();
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat);
