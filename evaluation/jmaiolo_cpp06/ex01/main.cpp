/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaiolo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:56:41 by jmaiolo           #+#    #+#             */
/*   Updated: 2024/04/28 22:50:07 by jmaiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data		*data;
	uintptr_t	serialized_data;
	Data		*deserialized_data;

	data = new Data;
	data->i = 424242;
	std::cout << "Data address: " << data << std::endl;
	std::cout << "Data value: " << data->i << std::endl;
	std::cout << std::endl;
	serialized_data = Serializer::serialize(data);
	deserialized_data = Serializer::deserialize(serialized_data);
	std::cout << "Data has been serialized" << std::endl;
	std::cout << std::endl;
	std::cout << "Deserialized data address: " << deserialized_data << std::endl;
	std::cout << "Deserialized data value: " << deserialized_data->i << std::endl;
	delete data;
}
