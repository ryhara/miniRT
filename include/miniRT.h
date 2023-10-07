/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miniRT.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryhara <ryhara@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:14:23 by tterao            #+#    #+#             */
/*   Updated: 2023/10/07 23:33:16 by ryhara           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include "objs.h"
# include "vector3d.h"
# include <stdlib.h>

# define ON_KEYDOWN 2
# define ON_DESTROY 17
# define ESC_KEY 53

typedef struct s_color
{
	int	red;
	int	green;
	int	blue;
}t_color;

typedef struct s_ambient_lightning
{
	t_color	color;
	float	ratio;
}t_ambient_lightning;

typedef struct s_camera
{
	t_vector3d	coordinate;
	t_vector3d	direction;
	int			fov;
}t_camera;

typedef struct s_light
{
	t_vector3d	coordinate;
	t_vector3d	direction;
	float		ratio;
	t_color		color;
}t_light;

typedef struct s_sphere
{
	t_vector3d	coordinate;
	float		diameter;
	float		radius;
	t_color		color;
}t_sphere;

typedef struct s_plane
{
	t_vector3d	coordinate;
	t_vector3d	direction;
	t_color		color;
}t_plane;

typedef struct s_cylinder
{
	t_vector3d	coordinate;
	t_vector3d	direction;
	t_color		color;
	float		diameter;
	float		radius;
	float		height;
}t_cylinder;

typedef struct s_global_data
{
	void				*mlx;
	void				*mlx_win;
	void				*img;
	char				*addr;
	int					bits_per_pixel;
	int					line_length;
	int					endian;
	int					height;
	int					width;
	t_color				background;
	t_ambient_lightning	*ambient_light;
	t_camera			*camera;
	t_light				*light;
	t_objs				*objs_list;
}t_global_data;

void		*try_calloc(size_t count, size_t size);
void		*try_malloc(size_t size);
void		render(t_global_data *data);
t_vector3d	get_3d_coordinate(int x, int y);
void		my_mlx_pixel_put(t_global_data *data, int x, int y, int color);
int			create_rgb(int r, int g, int b);

#endif
