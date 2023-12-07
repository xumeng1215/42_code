/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:27:37 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 16:27:39 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	neg_count;
	int	result;

	result = 0;
	neg_count = 0;
	while (*str < '0' || *str > '9')
	{
		if (*str == '-')
			neg_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	while (neg_count > 0)
	{
		neg_count--;
		result = -1 * result;
	}
	return (result);
}

int	do_op(int a, char *op, int b)
{
	int	(*operation[4])(int, int);
	int	len;
	int	result;

	result = 0;
	len = ft_strlen(op);
	if(len != 1)
		return (0);
	
	operation[4] = {plus, minus, divide, modulo};

	if(*op == '+')
		result = operation[0](a, b);
	else if(*op == '-')
		result = operation[1](a, b);
	else if(*op == '/')
	{	

		operation[2](a, b);
	}
	else if(*op == '%')
	{	
		if (b == 0)
		{
			write (1, "Stop : modulo by zero\n", 30);
			 ;
		}
		operation[3](a, b);
	}
	else
		write 


}

int	main(int argc, char *args[])
{
	if(argc != 4)
		return (0);

	int a = ft_atoi(args[1]);
	int b = ft_atoi(args[3]);

	do_op(a, args[2], b);
}