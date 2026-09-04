/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:34:22 by asauvage          #+#    #+#             */
/*   Updated: 2026/09/03 17:56:50 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class	RobotmyRequestForm: public AForm {
	public:
		RobotmyRequestForm();
		RobotmyRequestForm( const std::string& target );
		RobotmyRequestForm( const RobotmyRequestForm& obj );
		RobotmyRequestForm&	operator=( const RobotmyRequestForm& rhs );
		~RobotmyRequestForm();
		virtual void			execute( Bureaucrat const & executor ) const;
	private:
		std::string	target_;
};

#endif