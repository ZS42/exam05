#include<iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

#include "Warlock.hpp"

Warlock::Warlock():_name(), _title(), _mySpellsBook()
{

}

Warlock::Warlock(const Warlock &copy)
{
	*this = copy;
}

Warlock &Warlock::operator=(const Warlock &rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_title = rhs.getTitle();
	}
	return (*this);
}


Warlock::~Warlock()
{
	
	std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title):_name(name), _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

const std::string  &Warlock::getName() const
{
	return (_name);
}

const std::string  &Warlock::getTitle() const
{
	return (_title);
}

void Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void Warlock::introduce() const
{
	std::cout << _name << ": I am "<< _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell)
	{
		_mySpellsBook.learnSpell(spell);
	}
}

void Warlock::forgetSpell(std::string spellname)
{
	_mySpellsBook.forgetSpell(spellname);

}
void Warlock::launchSpell(std::string spellname, const ATarget &target)
{
	ASpell *tmp;

	tmp = _mySpellsBook.createSpell(spellname);
	if (tmp)
		tmp->launch(target);

}