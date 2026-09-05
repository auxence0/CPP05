/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 14:12:58 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 16:46:15 by asauvage         ###   ########.fr       */
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
}

Bureaucrat::Bureaucrat( const Bureaucrat& obj ): name_(obj.name_), grade_(obj.grade_) {
	return ;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& rhs ) {
	grade_ = rhs.grade_;
	return	*this;
}

Bureaucrat::~Bureaucrat() {
	return ;
}

std::string	Bureaucrat::getName() const {
	return name_;
}

int	Bureaucrat::getGrade() const {
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

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& rhs) {
	out << rhs.getName() << ", bureuacrat grade " << rhs.getGrade() << "\n";
	return out;
}
