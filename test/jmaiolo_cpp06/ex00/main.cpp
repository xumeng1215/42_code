/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:56:41 by jmaiolo           #+#    #+#             */
/*   Updated: 2024/04/26 14:57:22 by jmaiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Invalid number of arguments" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
