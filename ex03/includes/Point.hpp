/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:23:40 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/26 13:31:13 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		/* Attributes */

		/* Constructors & Destructors */
		Point(void);
		Point(const float x, const float y);

		Point(const Point &other);
		Point &operator=(const Point &other);

		~Point(void);

		/* Member functions */
		Fixed	getX(void) const;
		Fixed	getY(void) const;

		// Arithmetic operators
		Point	operator+(const Point &other) const;
		Point	operator-(const Point &other) const;
		Point	operator*(const Point &other) const;
		Point	operator/(const Point &other) const;


	private:
		/* Attributes */
		Fixed const	_x;
		Fixed const	_y;
		/* Constructors & Destructors */

		/* Member functions */

};

std::ostream	&operator<<(std::ostream &os, const Point &point);
bool			bsp(Point const a, Point const b, Point const c, Point const point);

#endif
