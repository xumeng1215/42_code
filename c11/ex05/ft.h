/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:24:56 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 18:24:59 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
#include <unistd.h>
#include <stdio.h>
int	do_op(int a, char op, int b);
int	check_args(int b, char *op);
int	ft_atoi(char *str);
void	ft_putnbr(int i);

int	plus(int a, int b);
int	minus(int a, int b);
int	divide(int a, int b);
int	modulo(int a, int b);

#endif
