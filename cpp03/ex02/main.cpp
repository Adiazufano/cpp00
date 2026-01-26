/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldiaz-u <aldiaz-u@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 11:36:40 by aldiaz-u          #+#    #+#             */
/*   Updated: 2026/01/26 11:36:41 by aldiaz-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap a("Clappy");
	ClapTrap b("Robo");

	std::cout << "\n--- TEST 1: Ataque simple ---\n";
	a.attack("Robo");
	b.takeDamage(0); // si tienes getter, si no, pon un número

	std::cout << "\n--- TEST 2: Reparación ---\n";
	a.beRepaired(5);

	std::cout << "\n--- TEST 3: Recibir daño fuerte ---\n";
	b.takeDamage(15);

	std::cout << "\n--- TEST 4: Intentar atacar sin vida ---\n";
	b.attack("Clappy"); // ya está muerto

	std::cout << "\n--- TEST 5: Agotar energía ---\n";
	for (int i = 0; i < 12; i++)
		a.attack("Robo");

	std::cout << "\n--- TEST 6: Intentar reparar sin energía ---\n";
	a.beRepaired(3);

	std::cout << "\n===== CREACIÓN DE SCAVTRAP =====\n";
    ScavTrap s1("Guardian");

    std::cout << "\n===== PRUEBAS DE SCAVTRAP =====\n";
    s1.attack("Clappy");   // usa su propio mensaje
    s1.takeDamage(20);     // daño típico de ScavTrap
    s1.beRepaired(10);

    std::cout << "\n===== MODO ESPECIAL DE SCAVTRAP =====\n";
    s1.guardGate();

    std::cout << "\n===== PRUEBAS DE ENERGÍA Y VIDA =====\n";
    for (int i = 0; i < 55; i++)
        s1.attack("Dummy"); // debe quedarse sin energía

    s1.beRepaired(5); // sin energía no debe poder

	std::cout << "\n===== CREACIÓN DE FRAGTRAP =====\n";
    FragTrap f1("Fraggy");

    std::cout << "\n===== PRUEBAS DE ATAQUE =====\n";
    f1.attack("Target");        // usa ataque heredado de ClapTrap
    f1.takeDamage(20);          // recibe daño
    f1.beRepaired(10);          // se repara

    std::cout << "\n===== PRUEBA DE HABILIDAD ESPECIAL =====\n";
    f1.highFivesGuys();

    std::cout << "\n===== PRUEBAS DE ENERGÍA =====\n";
    // agotamos energía para ver el comportamiento
    for (int i = 0; i < 105; i++)
        f1.attack("Dummy");

    f1.beRepaired(5); // sin energía no podrá reparar

	std::cout << "\n--- FIN DEL MAIN ---\n";
	return 0;
}
