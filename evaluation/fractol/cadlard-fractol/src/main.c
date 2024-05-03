/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 11:02:36 by cadlard           #+#    #+#             */
/*   Updated: 2024/05/02 14:01:36 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <libft.h>

#include <structs.h>
#include <fractol.h>
#include <colors.h>
#include <windefs.h>
#include <hooks.h>
#include <input.h>
#include <ft_atod.h>

static void	puterr(char *str)
{
	write(2, str, ft_strlen(str));
}

static void	setup_zoom(t_vars *vars)
{
	if (vars->fractol == 'm')
	{
		vars->xzoom.start = -2.0;
		vars->xzoom.end = 1.0;
		vars->yzoom.start = -1.5;
		vars->yzoom.end = 1.5;
	}
	else
	{
		vars->xzoom.start = -ESCAPE_RADIUS;
		vars->xzoom.end = ESCAPE_RADIUS;
		vars->yzoom.start = -ESCAPE_RADIUS;
		vars->yzoom.end = ESCAPE_RADIUS;
	}
	if (WIDTH > HEIGHT)
	{
		vars->xzoom.start *= (double)WIDTH / (double)HEIGHT;
		vars->xzoom.end *= (double)WIDTH / (double)HEIGHT;
	}
	else
	{
		vars->yzoom.start *= (double)HEIGHT / (double)WIDTH;
		vars->yzoom.end *= (double)HEIGHT / (double)WIDTH;
	}
}

static int	init_win(t_vars *vars, t_image *img)
{
	vars->mlx = mlx_init();
	if (vars->mlx == NULL)
		return (0);
	vars->win = mlx_new_window(vars->mlx, WIDTH, HEIGHT, "fractol");
	if (vars->win == NULL)
	{
		free(vars->mlx);
		return (0);
	}
	img->img = mlx_new_image(vars->mlx, WIDTH, HEIGHT);
	if (img->img == NULL)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		free(vars->mlx);
		return (0);
	}
	img->addr = mlx_get_data_addr(img->img, &img->bits_per_pixel,
			&img->line_length, &img->endian);
	vars->img = img;
	return (1);
}

static void	start_fractol(t_vars *vars)
{
	int		init_res;
	t_image	img;

	vars->colors_len = create_colors(&vars->colors, vars->fractol);
	if (vars->colors_len == -1)
	{
		puterr("Failed to malloc colors\n");
		return ;
	}
	setup_zoom(vars);
	init_res = init_win(vars, &img);
	if (init_res == 0)
	{
		puterr("Failed to initialise a window\n");
		return ;
	}
	vars->need_rerender = 1;
	mlx_loop_hook(vars->mlx, loop_hook, vars);
	mlx_key_hook(vars->win, key_hook, vars);
	mlx_mouse_hook(vars->win, mouse_hook, vars);
	mlx_hook(vars->win, 17, 1L << 17, exit_cleanly, vars);
	mlx_loop(vars->mlx);
}

int	main(int argc, char **argv)
{
	t_vars	vars;

	if (argc < 2 || ft_strlen(argv[1]) < 1)
	{
		puterr("Usage: ./fractol fractol_letter\n");
		return (1);
	}
	vars.fractol = ft_tolower(argv[1][0]);
	if (vars.fractol == 'j')
	{
		if (argc != 4)
		{
			puterr("Usage: ./fractol j real imaginary\n");
			return (1);
		}
		vars.julia_params.x = ft_atod(argv[2]);
		vars.julia_params.y = ft_atod(argv[3]);
	}
	else if (vars.fractol != 'm' || argc != 2)
	{
		puterr("Usage: ./fractol fractal_letter\n");
		return (1);
	}
	start_fractol(&vars);
}
