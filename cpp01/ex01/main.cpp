/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:40:50 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/01/16 11:40:51 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie*	horde;
	int	index;
	int	N;

	N = 5;
	index = 0;
	horde = zombieHorde(N, "Manuel");
	while (index < N)
	{
		horde[index].announce();
		index++;
	}
	delete[] horde;
	return (0);
}