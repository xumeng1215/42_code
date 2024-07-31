/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:27:37 by mexu              #+#    #+#             */
/*   Updated: 2023/12/10 10:59:50 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	do_op(int a, char op, int b)
{
	int	(*operation[5])(int, int);
	int	result;

	result = 0;	
	operation[0] = plus;
	operation[1] = minus;
	operation[2] = div;
	operation[3] = mod;	
	operation[4] = multi;


	if(op == '+')
		result = operation[0](a, b);
	else if(op == '-')
		result = operation[1](a, b);
	else if(op == '/')
		result = operation[2](a, b);
	else if(op == '%')
		result = operation[3](a, b);
	else if(op == '*')
		result = operation[4](a, b);
	else
		result = 0;
	return (result);
}

int	check_args(int b, char *op)
{
	printf("%s\n", op);
	if(*op != '+' || *op != '-' || *op != '/' || *op != '%')
	{
		write(1, "0\n", 1);
		return (0);
	}

	if(*op == '+' || *op == '-')
		return (1);
	if(*op == '/' && b == 0)
	{
		write(1, "message\n", 30);
		return (0);
	}
	if(*op == '%' && b == 0)
	{
		write(1, "modulo message\n", 30);
		return (0);
	}
	return (1);
}

int	main(int argc, char *args[])
{

	if(argc != 4)
		return (0);

	int a = ft_atoi(args[1]);
	int b = ft_atoi(args[3]);

	if (check_args(b, args[2]))
		ft_putnbr(do_op(a, args[2][0], b));
	return	(0);
}
