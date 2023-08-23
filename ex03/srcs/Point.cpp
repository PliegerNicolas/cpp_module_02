/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:30:35 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/07 15:40:57 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

/* Constructors & Destructors */

/* Public */

Point::Point(void): _x(0), _y(0)
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point::Point(const Point &other): _x(other._x), _y(other._y)
{
	return ;
}

Point::Point(const float x, const float y): _x(Fixed(x)), _y(Fixed(y))
{
	return ;
}

Point	&Point::operator=(const Point &other)
{
	if (this != &other)
	{
		this->~Point();
		new(this)	Point(other._x.toFloat(), other._y.toFloat());
	}
	return (*this);
}

/* Overloaded operators */

std::ostream	&operator<<(std::ostream &os, const Point &point)
{
	os << "(" << point.getX();
	os << " ; ";
	os << point.getY() << ")";
	return (os);
}

// Arithmetic operators
Point	Point::operator+(const Point &other) const
{
	return (Point((getX() + other.getX()).toFloat(), (getY() + other.getY()).toFloat()));
}

Point	Point::operator-(const Point &other) const
{
	return (Point((getX() - other.getX()).toFloat(), (getY() - other.getY()).toFloat()));
}

Point	Point::operator*(const Point &other) const
{
	return (Point((getX() * other.getX()).toFloat(), (getY() * other.getY()).toFloat()));
}

Point	Point::operator/(const Point &other) const
{
	return (Point((getX() / other.getX()).toFloat(), (getY() / other.getY()).toFloat()));
}


/* Member Functions */

/* Public */

Fixed	Point::getX(void) const
{
	return (_x);
}

Fixed	Point::getY(void) const
{
	return (_y);
}

/* Private */
