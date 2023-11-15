#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell():_name(), _effects()
{

}

ASpell::ASpell(const ASpell &copy)
{
	*this = copy;
}

ASpell &ASpell::operator=(const ASpell &rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_effects = rhs.getEffects();
	}
	return (*this);
}


ASpell::~ASpell()
{
	
}

ASpell::ASpell(const std::string &name, const std::string &effects):_name(name), _effects(effects)
{
	
}

const std::string  &ASpell::getName() const
{
	return (_name);
}

const std::string  &ASpell::getEffects() const
{
	return (_effects);
}


void ASpell::launch(const ATarget &target)
{
	target.getHitBySpell(*this);
}