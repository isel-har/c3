/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   objects.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-har <isel-har@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:59:34 by isel-har          #+#    #+#             */
/*   Updated: 2023/07/19 12:15:18 by isel-har         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJECTS_H
# define OBJECTS_H

# define WIN_WIDTH 		1024
# define WIN_HEIGTH 	800
# define NUM_RAYS 		WIN_WIDTH
# define S_SIZE			32
# define MEM_ERR		"memory allocation error\n"
# define DOOR_PATH		"textures/DOOR_2E.xpm"
# define IMG_ERR		"Invalid file path\n"
# define NORTH			'N'
# define SOUTH			'S'
# define EAST			'E'
# define WEST			'W'
# define DOR			'D'
# define RIGHT_ROTATION	124
# define LEFT_ROTATION	123
# define MOVE_FORWARD 	13
# define MOVE_BACKWARD	1
# define MOVE_RIGHT		2
# define MOVE_LEFT		0
# define ESC 			53
# define SCALE_SIZE		0.25
# define OPEN_DOOR		49
# define CTRL			256

typedef struct s_color
{
	int	r;
	int	g;
	int	b;
}	t_color;

typedef struct s_data
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

typedef struct s_tx
{
	void			*ptr;
	unsigned int	*data;
	int				bpp;
	int				size_line;
	int				endian;
	int				width;
	int				height;
	char			*type;
	int				sprite_x;
	int				sprite_y;
}	t_tx;

typedef struct s_cub
{
	double	p_x;
	double	p_y;
	double	fov;
	float	pdx;
	float	pdy;
	int		x_map;
	int		y_map;
	int		fd_m;
	void	*m_ptr;
	void	*w_ptr;
	char	*map_1d;
	char	**all;
	char	**map_2d;
	char	***element;
	char	*n_texture;
	char	*s_texture;
	char	*e_texture;
	char	*w_texture;
	char	p_or;
	char	*f_color;
	char	*c_color;
	t_color	*rgb_f;
	t_color	*rgb_c;
	t_data	*data;
	int		num_rays;
	int		win_width;
	int		win_height;
	double	next_x;
	double	next_y;
	double	x_h;
	double	y_h;
	double	x_v;
	double	y_v;
	double	angle;
	t_tx	*north_txt;
	t_tx	*south_txt;
	t_tx	*west_txt;
	t_tx	*east_txt;
	t_tx	*door_txt;
	bool	hori_line;
	bool	vert_line;
	bool	door;
	bool	close_door;
	int		door_x;
	int		door_y;
	double	d_p_dist;
	double	p_minix;
	double	p_miniy;
	int		calc_x;
	int		calc_y;
	int		door_index;
	int		door_row;
	int		rot_to_right;
	int		rot_to_left;
	double	x_offset;
	void	**gun_sprite;
	int		n_of_img;
	int		gun_key;
	int		w;
	int		h;
	int		move_forward;
	int		move_backward;
	int		move_right;
	int		move_left;
	int		rotation_right;
	int		rotation_left;
	int		gun;
	bool	all_map;
}	t_cub;

#endif
