/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 14:19:16 by nicolas           #+#    #+#             */
/*   Updated: 2023/06/07 18:24:25 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Point.hpp"

static float	dotProd(const Point &v1, const Point &v2)
{
	return (v1.getX().toFloat() * v2.getX().toFloat()
		+ v1.getY().toFloat() * v2.getY().toFloat());
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
    Point v0 = c - a;
    Point v1 = b - a;
    Point v2 = point - a;

	// squared length of v0
	float dot00 = dotProd(v0, v0);
	// projection of v0 onto v1
    float dot01 = dotProd(v0, v1);
	// projection of v0 onto v2
    float dot02 = dotProd(v0, v2);
	// squared length of v1
    float dot11 = dotProd(v1, v1);
	// projection of v1 onto v2
    float dot12 = dotProd(v1, v2);
	
	// the inverse denominator scales and normalizes the values of `u` anv `v`
    float inv_denom = 1 / (dot00 * dot11 - dot01 * dot01);
	// barycentric coordinates
    float u = (dot11 * dot02 - dot01 * dot12) * inv_denom;
    float v = (dot00 * dot12 - dot01 * dot02) * inv_denom;

	/* ************************************** */
	/* *                B                   * */
	/* *                o                   * */
	/* *               /\                   * */
	/* *             |/_ \                  * */
	/* *            u/\   \                 * */
	/* *            / v_|  \                * */
	/* *           /     oP \               * */
	/* *          o -------- o              * */
	/* *         A            C             * */
	/* *                                    * */
	/* ************************************** */

    return (u > 0) && (v > 0) && (u + v < 1);
}
