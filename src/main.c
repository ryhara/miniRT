/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tterao <tterao@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 17:54:04 by tterao            #+#    #+#             */
/*   Updated: 2023/09/30 17:04:24 by tterao           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"
#include "objs.h"
#include <stdlib.h>
#include <mlx.h>

int	main(int argc, char *argv[])
{
	t_global_data	data;

	if (argc != 2)
		return (EXIT_FAILURE);
	global_data_init(&data);

	return (0);
}
