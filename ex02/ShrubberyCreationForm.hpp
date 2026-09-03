/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 14:33:39 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/03 14:34:43 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string& target );
		ShrubberyCreationForm( const ShrubberyCreationForm& obj );
		ShrubberyCreationForm&	operator=( const ShrubberyCreationForm& rhs );
		~ShrubberyCreationForm();
		virtual void			execute( Bureaucrat const & executor ) const;
	private:
		std::string	target_;
};

#endif