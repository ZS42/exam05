# pragma once
 #include<iostream>
 #include"ASpell.hpp"

class Fireball: public ASpell
{
	public:
	Fireball();
	Fireball(const Fireball &copy);
	Fireball &operator=(const Fireball &rhs);
	~Fireball();
	ASpell *clone() const;
};