 #include<iostream>
 #include"ASpell.hpp"
 #include "Polymorph.hpp"

	Polymorph::Polymorph():ASpell("Polymorph", "turned into a critter")
	{

	}

	Polymorph::Polymorph(const Polymorph &copy)
	{
		*this = copy; 
	}

	Polymorph &Polymorph::operator=(const Polymorph &rhs)
	{
		if (this != &rhs)
		{
			_name = rhs.getName();
			_effects = rhs.getEffects();
		}
		return (*this);
	}

	Polymorph::~Polymorph()
	{

	}

	ASpell *Polymorph::clone() const
	{
		return (new Polymorph());
	}