/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:38:59 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 00:18:55 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

// int    ft_no_args()
// {
//     ft_printf("no args.\n");
//     ft_show_control();
//     exit(EXIT_FAILURE);
// }

//program will take 3 kind of input
int check_args(int ac, char **av)
{
    if (4 == ac && !ft_strncmp(av[1], "julia", 5))
        return (1);
    else if(2  == ac && !ft_strncmp(av[1], "mandelbrot", 10))
        return (1);
    else if(2 == ac && !ft_strncmp(av[1], "tricorn", 7))
        return (1);
    else
        return (0);
}

// void    ft_init(t_fractol *f)
// {
//     f->mlx_ptr = mlx_init();
//     if(!f->mlx_ptr)
//         exit(EXIT_FAILURE);
//     f->win_ptr = mlx_new_window(f->mlx_ptr, WIDTH, HEIGHT, "Fractol");
//     if(!f->win_ptr)
//         exit(EXIT_FAILURE);
//     f->sx = 2.0;
// 	f->rx = 0.5;
// 	f->fx = 1.0;    

// }


int main(int ac, char **av)
{
    t_fractol f;
    

    if(check_args(ac, av))
    {
        f.name = av[1];
        if(!ft_strncmp(f.name, "julia", 5))
        {
            f.julia_k.x = ft_atodbl(av[2]);
            f.julia_k.y = ft_atodbl(av[3]);
        }
        fractal_init(&f);
        fractal_render(&f);
        mlx_loop(f.mlx_connection);
    } 
    else
    {
        perror("error with args\n");
        exit(EXIT_FAILURE);
    }
}