# pragma once

#include<iostream>
#include "ATarget.hpp"


class BrickWall: public ATarget
{
	public:
	BrickWall();
	BrickWall(const BrickWall &copy);
	~BrickWall();

	BrickWall &operator=(const BrickWall &rhs);
	
	ATarget *clone() const;
};