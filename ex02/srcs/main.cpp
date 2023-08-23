/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:41:35 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/06 12:49:40 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"
/*
int main() {
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    std::cout << "a is " << "\033[33m" << a << "\033[0m" << std::endl;
    std::cout << "b is " << "\033[33m" << b << "\033[0m" << std::endl;
    std::cout << "c is " << "\033[33m" << c << "\033[0m" << std::endl;
    std::cout << "d is " << "\033[33m" << d << "\033[0m" << std::endl;

    std::cout << std::endl;

    std::cout << "a > b : " << "\033[33m" << (a > b) << "\033[0m" << std::endl;
    std::cout << "a < b : " << "\033[33m" << (a < b) << "\033[0m" << std::endl;
    std::cout << "a >= b: " << "\033[33m" << (a >= b) << "\033[0m" << std::endl;
    std::cout << "a <= b: " << "\033[33m" << (a <= b) << "\033[0m" << std::endl;
    std::cout << "a == b: " << "\033[33m" << (a == b) << "\033[0m" << std::endl;
    std::cout << "a != b: " << "\033[33m" << (a != b) << "\033[0m" << std::endl;

    std::cout << std::endl;

    std::cout << "a + b: " << "\033[33m" << (a + b) << "\033[0m" << std::endl;
    std::cout << "a - b: " << "\033[33m" << (a - b) << "\033[0m" << std::endl;
    std::cout << "a * b: " << "\033[33m" << (a * b) << "\033[0m" << std::endl;
    std::cout << "a / b: " << "\033[33m" << (a / b) << "\033[0m" << std::endl;

    std::cout << std::endl;

    std::cout << "++a: " << "\033[33m" << (++a) << "\033[0m" << std::endl;
    std::cout << "a++: " << "\033[33m" << (a++) << "\033[0m" << std::endl;
    std::cout << "a: " << "\033[33m" << a << "\033[0m" << std::endl;

    std::cout << std::endl;

    std::cout << "--a: " << "\033[33m" << (--a) << "\033[0m" << std::endl;
    std::cout << "a--: " << "\033[33m" << (a--) << "\033[0m" << std::endl;
    std::cout << "a: " << "\033[33m" << a << "\033[0m" << std::endl;

    std::cout << std::endl;

    std::cout << "min(a, b): " << "\033[33m" << Fixed::min(a, b) << "\033[0m" << std::endl;
    std::cout << "max(a, b): " << "\033[33m" << Fixed::max(a, b) << "\033[0m" << std::endl;

    return 0;
}
*/

int	main(void)
{
	Fixed		a;
	const Fixed	b(Fixed(5.05f) * Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}
