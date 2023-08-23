/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:47:07 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/06 13:55:05 by nicolas          ###   ########.fr       */
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
	os << fixed.toFloat();
	return (os);
}

// Comparison operators

bool	Fixed::operator>(const Fixed &other) const
{
	if (_value == other._value)
		return (_fractionalBits > other._fractionalBits);
	return (_value > other._value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	if (_value == other._value)
		return (_fractionalBits < other._fractionalBits);
	return (_value < other._value);

}

bool	Fixed::operator>=(const Fixed &other) const
{
	return ((*this > other) || (*this == other));
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return ((*this < other) || (*this == other));
}

bool	Fixed::operator==(const Fixed &other) const
{
	return ((_value == other._value) && (_fractionalBits == other._fractionalBits));
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return ((_value != other._value) || (_fractionalBits != other._fractionalBits));
}

// Arithmetic operators
Fixed	Fixed::operator+(const Fixed &other) const
{
	return (Fixed(toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	return (Fixed(toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other) const
{
	return (Fixed(toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	return (Fixed(toFloat() / other.toFloat()));
}

// Increment and decrement operators
Fixed	&Fixed::operator++(void)
{
	_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	
	++(*this);
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(*this);
	return (temp);
}

// Overloaded member functions
Fixed	Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 <= fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 <= fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 >= fixed2)
		return (fixed1);
	return (fixed2);
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

int	Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

float	Fixed::toFloat(void) const
{
	return((float)_value / (1 << _fractionalBits));
}

/* Private */
