 #include<iostream>
 #include"ASpell.hpp"
 #include "Fireball.hpp"

	Fireball::Fireball():ASpell("Fireball", "burnt to a crisp")
	{

	}

	Fireball::Fireball(const Fireball &copy)
	{
		*this = copy; 
	}

	Fireball &Fireball::operator=(const Fireball &rhs)
	{
		if (this != &rhs)
		{
			_name = rhs.getName();
			_effects = rhs.getEffects();
		}
		return (*this);
	}

	Fireball::~Fireball()
	{

	}

	ASpell *Fireball::clone() const
	{
		return (new Fireball());
	}