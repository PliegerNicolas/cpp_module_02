/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:43:14 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/06 12:08:09 by nicolas          ###   ########.fr       */
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

		/* Overloaded operators */
		// Comparison operators
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		// Arithmetic operators
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		// Increment and decrement operators
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);

		// Overloaded member functions
		static Fixed	min(Fixed &fixed1, Fixed &fixed2);
		static Fixed	min(const Fixed &fixed1, const Fixed &fixed2);
		static Fixed	max(Fixed &fixed1, Fixed &fixed2);
		static Fixed	max(const Fixed &fixed1, const Fixed &fixed2);

	private:
		/* Attributes */
		int					_value;
		static const int	_fractionalBits = 8;
		/* Constructors & Destructors */

		/* Member functions */

};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif
