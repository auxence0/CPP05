/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/04 13:14:34 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/05 17:30:42 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>

class	AForm;

class	Intern {
	public:
		Intern();
		Intern( const Intern& obj );
		Intern&	operator=( const Intern& rhs );
		~Intern();
		AForm*	makeForm( const std::string& name, const std::string& target );

	class	InternBadStr: public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Bad string\n");
			}
	};
};

#endif