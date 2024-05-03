/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:52:57 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/29 12:30:58 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <structs.h>

/*
# include <time.h>
# include <stdio.h>
# define TIME(F) ({\
	clock_t start = clock();\
	(F);\
	clock_t end = clock();\
	double cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;\
	printf("time: %fs\n", cpu_time_used);\
	})\
*/

# define MAX_ITERS 150
# define ESCAPE_RADIUS 2.0
# define ESCAPE_RADIUS_2 4.0

void	fractol_set(t_vars *vars);

#endif
