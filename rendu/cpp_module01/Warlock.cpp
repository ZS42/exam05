#include<iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

#include "Warlock.hpp"

Warlock::Warlock():_name(), _title(), _mySpells()
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
		_mySpells = rhs._mySpells;
	}
	return (*this);
}


Warlock::~Warlock()
{
	std::map<std::string, ASpell *>::iterator it;

	// it = _mySpells.begin();
	// while (it != _mySpells.end())
	// {
	// 	delete it->second;
	// 	_mySpells.erase(it);
	// 	it++;
	// }
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
		_mySpells[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(std::string spellname)
{
	std::map<std::string, ASpell *>::iterator it;

	it = _mySpells.find(spellname);
	if (it != _mySpells.end())
	{
		delete it->second;
		_mySpells.erase(spellname);
	}

}
void Warlock::launchSpell(std::string spellname, const ATarget &target)
{
	std::map<std::string, ASpell *>::iterator it;

	it = _mySpells.find(spellname);
	if (it != _mySpells.end())
	{
		_mySpells[spellname]->launch(target);
	}

}