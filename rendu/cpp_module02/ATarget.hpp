# pragma once

#include<iostream>
class ASpell;

class ATarget
{
	protected:
	std::string _type;
	
	public:
	ATarget();
	ATarget(const ATarget &copy);
	ATarget &operator=(const ATarget &rhs);


	virtual ~ATarget();
	ATarget(std::string const &type);

	const std::string  &getType() const;
	

	void getHitBySpell(const ASpell &spell) const;
	virtual ATarget *clone() const = 0;
};