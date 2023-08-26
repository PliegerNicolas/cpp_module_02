/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:41:35 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/26 11:08:37 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	a.setRawBits(125);
	std::cout << a.getRawBits() << std::endl;

	return (0);
}
