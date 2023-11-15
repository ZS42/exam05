#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "SpellBook.hpp"

class Warlock
{
	private:
	std::string _name;
	std::string _title;
	SpellBook _mySpellsBook;

	Warlock();
	Warlock(const Warlock &copy);
	Warlock &operator=(const Warlock &rhs);

	public:

	~Warlock();
	Warlock(std::string const &name, std::string const &title);

	const std::string  &getName() const;
	const std::string  &getTitle() const;
	void setTitle(std::string const &title);

	void introduce() const;
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellname);
	void launchSpell(std::string spellname, const ATarget &target);
};