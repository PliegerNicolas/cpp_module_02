/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:43:14 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/26 11:28:01 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <iomanip>
# include <cmath>

class Fixed
{
	public:
		/* Attributes */

		/* Constructors & Destructors */
		Fixed(void);
		Fixed(const int i_value);
		Fixed(const float f_value);

		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);

		~Fixed(void);

		/* Member functions */
		int		getRawBits(void) const;
		void	setRawBits(const int raw);

		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		/* Attributes */
		int					_value;
		static const int	_fractionalBits = 8;
		/* Constructors & Destructors */

		/* Member functions */

};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif
