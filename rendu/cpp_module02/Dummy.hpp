# pragma once

#include<iostream>
#include "ATarget.hpp"


class Dummy: public ATarget
{
	public:
	Dummy();
	Dummy(const Dummy &copy);
	~Dummy();

	Dummy &operator=(const Dummy &rhs);
	
	ATarget *clone() const;
};