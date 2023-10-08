/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector3d_operate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 13:48:29 by ryhara            #+#    #+#             */
/*   Updated: 2023/10/08 13:55:21 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector3d.h"

t_vector3d vector3d_cross(t_vector3d v1, t_vector3d v2)
{
	t_vector3d	result;

	result.x = v1.y * v2.z - v1.z * v2.y;
	result.y = v1.z * v2.x - v1.x * v2.z;
	result.z = v1.x * v2.y - v1.y * v2.x;
	return (result);
}

t_vector3d	vector3d_create(float x, float y, float z)
{
	t_vector3d	new;

	new.x = x;
	new.y = y;
	new.z = z;
	return (new);
}
