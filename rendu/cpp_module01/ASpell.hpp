# pragma once

#include<iostream>
class ATarget;

class ASpell
{
	protected:
	std::string _name;
	std::string _effects;

	public:
	ASpell();
	ASpell(const ASpell &copy);
	ASpell &operator=(const ASpell &rhs);


	virtual ~ASpell();
	ASpell(std::string const &name, std::string const &effects);

	const std::string  &getName() const;
	const std::string  &getEffects() const;


	void launch(const ATarget &target);
	virtual ASpell *clone() const = 0;
};