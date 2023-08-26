/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:41:35 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/26 12:12:45 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

static void	compareInts(void)
{

	std::cout << "\033[33m";
	std::cout << "Compare fixed-ints";
	std::cout << "\033[0m" << std::endl;

	Fixed	a(10);
	Fixed	b(20);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl << std::endl;

	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
}

static void	compareFloats(void)
{

	std::cout << "\033[33m";
	std::cout << "Compare fixed-floats";
	std::cout << "\033[0m" << std::endl;

	Fixed	a(42.42424242f);
	Fixed	b(24.2424f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl << std::endl;

	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
}

static void	compareEqualFloats(void)
{

	std::cout << "\033[33m";
	std::cout << "Compare similar fixed-floats";
	std::cout << "\033[0m" << std::endl;

	Fixed	a(15.505f);
	Fixed	b(15.5055f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl << std::endl;

	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
}

static void	compareIntFromFloat(void)
{

	std::cout << "\033[33m";
	std::cout << "Compare int-fixed and float-fixed";
	std::cout << "\033[0m" << std::endl;

	Fixed	a(15.505f);
	Fixed	b(15);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl << std::endl;

	std::cout << "a < b : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
}

static void	addition(void)
{
	std::cout << "\033[33m";
	std::cout << "Addition";
	std::cout << "\033[0m" << std::endl;

	Fixed	a(15.505f);
	Fixed	b(10);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl << std::endl;

	std::cout << "a + b : " << a + b << std::endl;
	std::cout << "b + a : " << b + a << std::endl;
	std::cout << "a + 1 : " << a + 1 << std::endl;
	std::cout << "a + 1.5f : " << a + 1.5f << std::endl;
	std::cout << "a++ : " << a++ << std::endl;
	std::cout << "++a : " << ++a << std::endl;
	std::cout << "++ increments by a predetermined step size" << std::endl;
}

static void	substraction(void)
{
	std::cout << "\033[33m";
	std::cout << "Substraction";
	std::cout << "\033[0m" << std::endl;

	Fixed	a(15.505f);
	Fixed	b(10);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
}

static void multiplication(void)
{
	std::cout << "\033[33m";
	std::cout << "Multiplication";
	std::cout << "\033[0m" << std::endl;

	Fixed	a(15.505f);
	Fixed	b(10);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
}

static void division(void)
{
	std::cout << "\033[33m";
	std::cout << "Division";
	std::cout << "\033[0m" << std::endl;

	Fixed	a(15.505f);
	Fixed	b(10);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
}

int	main(void)
{
	/* comparison operators */
	compareInts();
	std::cout << std::endl;
	compareFloats();
	std::cout << std::endl;
	compareEqualFloats();
	std::cout << std::endl;
	compareIntFromFloat();
	std::cout << std::endl;

	/* arithmetic operators */
	addition();
	std::cout << std::endl;
	substraction();
	std::cout << std::endl;
	multiplication();
	std::cout << std::endl;
	division();
	std::cout << std::endl;

	return (0);
}
