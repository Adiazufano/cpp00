/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:41:02 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/01/16 11:41:03 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int		index;
	Zombie*	zombies;

	index = 0;
	if (N <= 0)
		return (NULL);
	zombies = new Zombie[N];
	while (index < N)
	{
		zombies[index].setName(name);
		index++;
	}
	return (zombies);
}