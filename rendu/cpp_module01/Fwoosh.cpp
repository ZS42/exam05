 #include<iostream>
 #include"ASpell.hpp"
 #include "Fwoosh.hpp"

	Fwoosh::Fwoosh():ASpell("Fwoosh", "fwooshed")
	{

	}

	Fwoosh::Fwoosh(const Fwoosh &copy)
	{
		*this = copy; 
	}

	Fwoosh &Fwoosh::operator=(const Fwoosh &rhs)
	{
		if (this != &rhs)
		{
			_name = rhs.getName();
			_effects = rhs.getEffects();
		}
		return (*this);
	}

	Fwoosh::~Fwoosh()
	{

	}

	ASpell *Fwoosh::clone() const
	{
		return (new Fwoosh());
	}