# pragma once
 #include<iostream>
 #include"ASpell.hpp"

class Fwoosh: public ASpell
{
	public:
	Fwoosh();
	Fwoosh(const Fwoosh &copy);
	Fwoosh &operator=(const Fwoosh &rhs);
	~Fwoosh();
	ASpell *clone() const;
};