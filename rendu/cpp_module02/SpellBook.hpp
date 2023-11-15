#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

class SpellBook
{
	private:
	std::map<std::string, ASpell *> _myBook;

	SpellBook(const SpellBook &copy);
	SpellBook &operator=(const SpellBook &rhs);

	public:

	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(const std::string &spellname);
	ASpell* createSpell(std::string const &spellname);
};