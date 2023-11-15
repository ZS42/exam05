#include<iostream>
#include"Dummy.hpp"
#include"ASpell.hpp"

Dummy::Dummy():ATarget("Target Practice Dummy")
{

}

Dummy::Dummy(const Dummy &copy)
{
	*this = copy;
}

Dummy &Dummy::operator=(const Dummy &rhs)
{
	if (this != &rhs)
	{
		_type = rhs.getType();
	}
	return (*this);
}


Dummy::~Dummy()
{
	
}

ATarget *Dummy::clone() const
{
	return (new Dummy());
}
