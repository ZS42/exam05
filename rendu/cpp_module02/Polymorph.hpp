# pragma once
 #include<iostream>
 #include"ASpell.hpp"

class Polymorph: public ASpell
{
	public:
	Polymorph();
	Polymorph(const Polymorph &copy);
	Polymorph &operator=(const Polymorph &rhs);
	~Polymorph();
	ASpell *clone() const;
};