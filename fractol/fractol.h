/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:34:37 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 12:30:21 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
#define FRACTOL_H

// includes headers
#include <stdio.h>
#include "minilibx-linux/mlx.h"
#include <math.h>
#include <X11/keysym.h>
#include <X11/X.h>
#include <stdlib.h>

// window size define
#define WIDTH 600
#define HEIGHT 600

#define BLACK       0x000000  // RGB(0, 0, 0)
#define WHITE       0xFFFFFF  // RGB(255, 255, 255)
#define RED         0xFF0000  // RGB(255, 0, 0)
#define GREEN       0x00FF00  // RGB(0, 255, 0)
#define BLUE        0x0000FF  // RGB(0, 0, 255)

// struct define

typedef struct s_complex
{
    double x;
    double y;
} t_complex;

typedef struct s_image
{
    void *img_ptr;
    char *pixels_ptr;
    int bpp;
    int line_length;
    int endian;
} t_img;

typedef struct s_fractol
{
    char *name;
    void *mlx_connection;
    void *mlx_window;
    t_img img;

    int iteration_limit;

    t_complex julia_k;
    double escape_value;
    double shift_x;
    double shift_y;
    double zoom;

} t_fractol;

// function prototypes
int check_args(int ac, char **av);

void fractal_init(t_fractol *f);
void    fractal_render(t_fractol *f);

//calculate the iteration numbers
int calc_julia(t_fractol *f, t_complex z);
int calc_mandelbrot(t_fractol *f, t_complex c);
int calc_tricorn(t_fractol *f, t_complex c);


//event handlers
int close_handler(t_fractol *f);
int key_handler(int keysym, t_fractol *f);
int mouse_handler(int button, int x, int y, t_fractol *f);
int julia_track(int x, int y, t_fractol *f);


// math utils
double scale_map(double num, double min1, double max1, double min2, double max2);
t_complex sum_complex(t_complex z1, t_complex z2);
t_complex square_complex(t_complex z);
double magnitude_squared(t_complex z);

//string utils
double	ft_atodbl(char *str);
int	ft_strncmp(char *s1, char *s2, int n);


#endif // fractol.h