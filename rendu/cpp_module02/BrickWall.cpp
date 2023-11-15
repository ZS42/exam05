#include<iostream>
#include"BrickWall.hpp"
#include"ASpell.hpp"

BrickWall::BrickWall():ATarget("Inconspicuous Red-brick Wall")
{

}

BrickWall::BrickWall(const BrickWall &copy)
{
	*this = copy;
}

BrickWall &BrickWall::operator=(const BrickWall &rhs)
{
	if (this != &rhs)
	{
		_type = rhs.getType();
	}
	return (*this);
}


BrickWall::~BrickWall()
{
	
}

ATarget *BrickWall::clone() const
{
	return (new BrickWall());
}
