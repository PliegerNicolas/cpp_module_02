/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:47:07 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/06 01:19:59 by nicolas          ###   ########.fr       */
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

Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;

	if (this != &other)
		_value = other.getRawBits();
	return (*this);
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

void	Fixed::setRawBits(int raw)
{
	std::cout << "\033[36m" << "setRawBits" << "\033[0m";
	std::cout << " member function ";
	std::cout << "\033[36m" << "called" << "\033[0m";
	std::cout << std::endl;

	_value = raw;
}

/* Private */
