#include<iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

SpellBook::SpellBook():_myBook()
{

}

SpellBook::SpellBook(const SpellBook &copy)
{
	*this = copy;
}

SpellBook &SpellBook::operator=(const SpellBook &rhs)
{
	if (this != &rhs)
	{
		
	}
	return (*this);
}


SpellBook::~SpellBook()
{
	std::map<std::string, ASpell *>::iterator it;
	
	it = _myBook.begin();
	while (it != _myBook.end())
	{
		delete it->second;
		_myBook.erase(it);
		it++;
	}
}

void SpellBook::learnSpell(ASpell *spell)
{
	if (spell)
	{
		_myBook[spell->getName()] = spell->clone();
	}
}

void SpellBook::forgetSpell(const std::string &spellname)
{
	std::map<std::string, ASpell *>::iterator it;

	it = _myBook.find(spellname);
	if (it != _myBook.end())
	{
		delete it->second;
		_myBook.erase(spellname);
	}

}

ASpell *SpellBook::createSpell(const std::string &spellname)
{
	std::map<std::string, ASpell *>::iterator it;

	it = _myBook.find(spellname);
	if (it != _myBook.end())
		return (_myBook[spellname]);
	else 
		return (NULL);

}