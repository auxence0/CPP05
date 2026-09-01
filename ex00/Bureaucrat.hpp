/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 13:53:02 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/01 16:40:49 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

class	Bureaucrat {
	private:
		const std::string	name_;
		int					grade_;
	public:
		Bureaucrat();
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& obj);
		~Bureaucrat();
		Bureaucrat& operator=( const Bureaucrat& rhs );
		std::string	getName() const ;
		int			getGrade() const ;
		void		increment();
		void		decrement();

	class	GradeTooHighException: public std::exception {
		public:
			virtual const char*	what() const throw() {
				return ("Grade is too high\n");
			}
	};
	class	GradeTooLowException: public std::exception {
		public:
			virtual const char * what() const throw() {
				return ("Grade is too low\n");
			}
	};
};

std::ostream&	operator<<( std::ostream& out, const Bureaucrat& rhs );

#endif