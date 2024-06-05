/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:55:04 by sastier-          #+#    #+#             */
/*   Updated: 2024/06/05 13:52:04 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Function to convert a string to a long long integer
long long	ft_atol(const char *str)
{
    int			count; // Counter for iterating through the string
    long long	res; // Result of the conversion
    int			neg; // Flag to track if the number is negative

    count = 0;
    res = 0;
    neg = 1;
    // Skip leading whitespace characters
    while ((str[count] >= 9 && str[count] <= 13) || str[count] == ' ')
    {
        count++;
    }
    // Check for a sign character
    if (str[count] == '-' || str[count] == '+')
    {
        if (str[count] == '-')
            neg *= -1;
        count++;
    }
    // Check if the first non-whitespace character is a digit
    if (!(str[count] >= '0' && str[count] <= '9'))
        return (LONG_MAX);
    // Convert the string to a long long integer
    while (str[count] >= '0' && str[count] <= '9')
        res = res * 10 + (str[count++] - 48);
    // Check if there are any non-digit characters after the number
    if (str[count])
        return (LONG_MAX);
    return (res * neg);
}

// Function to perform basic verification on a node in the stack
int	basic_verif(t_node *a, long long value, int pos)
{
    t_node	*temp; // Temporary node for iterating through the stack
    int		i; // Counter for iterating through the stack
    int		size; // Size of the stack

    i = 0;
    temp = a;
    size = ft_lstsize_node(a);
    // Check if the value is within the range of an int
    if (value > INT_MAX || value < INT_MIN)
        return (0);
    // If pos is 0, return 1 (true)
    if (pos == 0)
        return (1);
    // Check if the value already exists in the stack
    while (i < size)
    {
        if (temp->data == value)
            return (0);
        temp = temp->next;
        i++;
    }
    return (1);
}

// Function to check if an array of strings is empty
int	av_empty(char **av)
{
    int	i; // Counter for iterating through the array
    int	y; // Counter for iterating through each string

    i = 0;
    while (av[i])
    {
        y = 0;
        while (av[i][y])
        {
            // If a non-whitespace character is found, return 0 (false)
            if (av[i][y] > 32)
                return (0);
            y++;
        }
        i++;
    }
    return (1);
}
