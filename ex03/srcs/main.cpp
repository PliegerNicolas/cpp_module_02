/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:41:35 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/07 18:11:58 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

int	main(void)
{
	Point	A(-2, 1);
	Point	B(0, 5);
	Point	C(2, 2);
	Point	P(1, 3);

	// Test 1 : Point set inside of triangle.
	std::cout << "\033[37m" << "Test 1 : " << "expected IN" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	P = Point(1.4, 3.4);
	// Test 2 : Point outside of triangle.
	std::cout << "\033[37m" << "Test 2 : " << "expected OUT" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	P = B;
	// Test 3 : Overlapping points.
	std::cout << "\033[37m" << "Test 3 : " << "expected OUT" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	std::cout << std::endl;

	A = Point(0, 0);
	B = Point(2, 0);
	C = Point(0, 2);
	P = Point(0.25, 0.25);
	// Test 4 : Point set outside of triangle.
	std::cout << "\033[37m" << "Test 4 : " << "expected IN" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	P = Point(0.5, 0.5);
	// Test 5 : Point on hypotenuse. Rounding affects the result.
	std::cout << "\033[37m" << "Test 5 : " << "expected IN";
	std::cout << "\033[31m" << " (due to rounded value)";
	std::cout << "\033[37m" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	P = Point(0, 0);
	// Test 6 : 0 point. Overlapping points.
	std::cout << "\033[37m" << "Test 6 : " << "expected OUT" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	std::cout << std::endl;

	A = Point(1, -2);
	B = Point(-2, 1);
	C = Point(-2, -1);
	P = Point(-1.36,-0.63);
	// Test 7 : Point inside of triangle.
	std::cout << "\033[37m" << "Test 7 : " << "expected IN" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	P = Point(0, -2);
	// Test 8 : Point set outside of triangle.
	std::cout << "\033[37m" << "Test 8 : " << "expected OUT" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	std::cout << std::endl;
	A = Point(0, 0);
	B = Point (1, 1);
	C = Point (2, 2);
	P = Point(1.5, 1.5);
	// Test 9 : Collinear triangle. Point on "line".
	std::cout << "\033[37m" << "Test 9 : " << "expected OUT" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	P = Point(10, 10);
	// Test 10 : Collinear triangle. Point outside of triangle but on extension.
	std::cout << "\033[37m" << "Test 10 : " << "expected OUT" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	P = Point(-10, 10);
	// Test 11 : Collinear triangle. Point outside of triangle but on extension.
	std::cout << "\033[37m" << "Test 11 : " << "expected OUT" << " got " << "\033[37m";
	std::cout << "\033[35m" << (bsp(A, B, C, P) ? "IN" : "OUT") << "\033[0m" << std::endl;

	return (0);
}
