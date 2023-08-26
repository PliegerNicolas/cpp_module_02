/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:47:07 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/26 11:27:34 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

/* Constructors & Destructors */

/* Public */

Fixed::Fixed(void): _value(0)
{
	std::cout << "\033[36m" << "Default" << "\033[0m";
	std::cout << " constructor ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "\033[36m" << "Copy" << "\033[0m";
	std::cout << " constructor ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;

	_value = other.getRawBits();
}

Fixed::Fixed(int i_value): _value(i_value << _fractionalBits)
{
	std::cout << "\033[36m" << "Int" << "\033[0m";
	std::cout << " constructor ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;
}

Fixed::Fixed(float f_value): _value((int)roundf(f_value * (1 << _fractionalBits)))
{
	std::cout << "\033[36m" << "Float" << "\033[0m";
	std::cout << " constructor ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;

}

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;

	if (this != &other)
		_value = other.getRawBits();
	return (*this);
}

/* Overloaded operators */

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed)
{
	os << std::setprecision(8) << fixed.toFloat();
	return (os);
}

/* Member Functions */

/* Public */

int	Fixed::getRawBits(void) const
{
	std::cout << "\033[36m" << "getRawBits" << "\033[0m";
	std::cout << " member function ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;

	return (_value);
}

void	Fixed::setRawBits(const int raw)
{
	std::cout << "\033[36m" << "setRawBits" << "\033[0m";
	std::cout << " member function ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;

	_value = raw;
}

int	Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return((float)_value / (1 << _fractionalBits));
}

/* Private */
