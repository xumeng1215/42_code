/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:13:18 by yiuwong           #+#    #+#             */
/*   Updated: 2023/12/09 02:26:43 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"
#include "ops.h"

t_op_func	*get_op(t_op_func *f[5], char *str)
{
	if (!str)
		return (0);
	if (str[1] != '\0')
		return (0);
	if (str[0] == '+')
		return (f[0]);
	if (str[0] == '-')
		return (f[1]);
	if (str[0] == '*')
		return (f[2]);
	if (str[0] == '/')
		return (f[3]);
	if (str[0] == '%')
		return (f[4]);
	return (0);
}

void	init_op_array(t_op_func *f[5])
{
	t_op_func	**p;

	p = f;
	*p++ = add;
	*p++ = subtract;
	*p++ = multiply;
	*p++ = divide;
	*p = modulo;
}

int	check_op(int b, char op)
{
	if (b == 0)
	{
		if (op == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		else if (op == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int			a;
	int			b;
	t_op_func	*f[5];
	t_op_func	*func;

	if (argc == 4)
	{
		init_op_array(f);
		func = get_op(f, argv[2]);
		if (func == 0)
		{
			ft_putstr("0\n");
			return (1);
		}
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		if (check_op(b, argv[2][0]))
		{
			ft_putnbr((*func)(a, b));
			ft_putchar('\n');
		}
	}
	return (0);
}
