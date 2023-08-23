/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:43:14 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/06 01:29:38 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:
		/* Attributes */

		/* Constructors & Destructors */
		Fixed(void);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed(void);

		/* Member functions */
		int		getRawBits(void) const;
		void	setRawBits(int raw);

	private:
		/* Attributes */
		int					_value;
		static const int	_fractionalBits = 8;
		/* Constructors & Destructors */

		/* Member functions */

};

#endif
