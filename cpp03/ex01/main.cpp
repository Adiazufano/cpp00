/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 10:27:00 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/01/26 10:37:26 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("Clappy");
	ClapTrap b("Robo");

	std::cout << "\n--- TEST 1: Ataque simple ---\n";
	a.attack("Robo");
	b.takeDamage(0);
	std::cout << "\n--- TEST 2: Reparación ---\n";
	a.beRepaired(5);

	std::cout << "\n--- TEST 3: Recibir daño fuerte ---\n";
	b.takeDamage(15);

	std::cout << "\n--- TEST 4: Intentar atacar sin vida ---\n";
	b.attack("Clappy");

	std::cout << "\n--- TEST 5: Agotar energía ---\n";
	for (int i = 0; i < 12; i++)
		a.attack("Robo");

	std::cout << "\n--- TEST 6: Intentar reparar sin energía ---\n";
	a.beRepaired(3);

	std::cout << "\n===== CREACIÓN DE SCAVTRAP =====\n";
	ScavTrap s1("Guardian");

	std::cout << "\n===== PRUEBAS DE SCAVTRAP =====\n";
	s1.attack("Clappy");
	s1.takeDamage(20);
	s1.beRepaired(10);

	std::cout << "\n===== MODO ESPECIAL DE SCAVTRAP =====\n";
	s1.guardGate();

	std::cout << "\n===== PRUEBAS DE ENERGÍA Y VIDA =====\n";
	for (int i = 0; i < 55; i++)
		s1.attack("Dummy");

	s1.beRepaired(5);

	std::cout << "\n--- FIN DEL MAIN ---\n";
	return 0;
}
