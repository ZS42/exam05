#include<iostream>
#include"ATarget.hpp"
#include"ASpell.hpp"

ATarget::ATarget():_type()
{

}

ATarget::ATarget(const ATarget &copy)
{
	*this = copy;
}

ATarget &ATarget::operator=(const ATarget &rhs)
{
	if (this != &rhs)
	{
		_type = rhs.getType();
	}
	return (*this);
}


ATarget::~ATarget()
{
	
}

ATarget::ATarget(const std::string &type):_type(type)
{
	
}

const std::string  &ATarget::getType() const
{
	return (_type);
}

void ATarget::getHitBySpell(const ASpell &spell) const
{
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}