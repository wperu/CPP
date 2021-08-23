/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:17:19 by wperu             #+#    #+#             */
/*   Updated: 2021/08/20 18:33:36 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class Claptrap
{

	public:

		Claptrap();
		Claptrap(std::string name);
		Claptrap(std::string name, int hitpoints, int energy_point, int attack_damage);
		Claptrap( Claptrap const & src );
		~Claptrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name(void) const ;
		int 		get_hitpoints(void) const ;
		int			get_energy_point(void) const ;
		int			get_attack_damage(void )const ;
		Claptrap &		operator=( Claptrap const & rhs );

	protected:
		std::string name ;
		int hitpoints;
		int energy_point;
		int attack_damage;

};

std::ostream &			operator<<( std::ostream & o, Claptrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */