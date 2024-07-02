/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:34:37 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/02 23:30:05 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

//includes headers
# include "minilibx-linux/mlx.h"
# include "minilibx-linux/mlx_int.h"
# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <math.h>
# include <X11/keysym.h>
# include <X11/X.h>
# include <stdlib.h>

//window size define
# define WIDTH 900
# define HEIGHT 900
# define MAX_ITERATION 60
//struct define

typedef struct s_complex
{
    double x;
    double y;
}t_complex;

typedef struct s_image
{
    void    *img_ptr;
    char    *pixels_ptr;
    int     bpp;
    int     line_length;
    int     endian;
} t_img;

typedef struct s_fractol
{
    char    *name;
    void    *mlx_connection;
    void    *mlx_window;
    t_img   img;
    
    t_complex   julia_k;
    double     escape_value;
    t_complex shift;
    double zoom;

} t_fractol;


//function prototypes
int check_args(int ac, char **av);

void    fractal_init(t_fractol *f);
double map(double unscaled_num, double new_min, double new_max, double old_min, double old_max);


//math utils
t_complex sum_complex(t_complex z1, t_complex z2);
t_complex square_complex(t_complex z);
double magnitude_squared(t_complex z);

#endif //fractol.h