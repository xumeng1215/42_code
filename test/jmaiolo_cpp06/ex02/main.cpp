/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaiolo <jmaiolo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:56:41 by jmaiolo           #+#    #+#             */
/*   Updated: 2024/05/10 18:03:04 by jmaiolo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <time.h>

Base	*generate(void)
{
	int	random = rand() % 3;

	if (random == 0)
	{
		std::cout << "instanciated A" << std::endl;
		return (new A());
	}
	else if (random == 1)
	{
		std::cout << "instanciated B" << std::endl;
		return (new B());
	}
	else if (random == 2)
	{
		std::cout << "instanciated C" << std::endl;
		return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		(void) dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::exception &e) {}
	try
	{
		(void) dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	} catch (std::exception &e) {}
	try
	{
		(void) dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	} catch (std::exception &e) {}
	return ;
}

int	main(void)
{
	srand(time(NULL));
	Base	*base = generate();

	identify(base);
	identify(*base);
	delete base;
	return (0);
}
