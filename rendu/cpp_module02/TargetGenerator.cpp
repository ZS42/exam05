#include<iostream>
#include <map>

// #include "ASpell.hpp"
#include "ATarget.hpp"
#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator():_myTargets()
{

}

TargetGenerator::TargetGenerator(const TargetGenerator &copy)
{
	*this = copy;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &rhs)
{
	if (this != &rhs)
	{
		
	}
	return (*this);
}


TargetGenerator::~TargetGenerator()
{
	// std::map<std::string, ATarget *>::iterator it;

	// it = _myTargets.begin();
	// while (it != _myTargets.end())
	// {
	// 	delete it->second;
	// 	_myTargets.erase(it);
	// 	it++;
	// }
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if (target)
	{
		_myTargets[target->getType()] = target;
		// _myTargets[target->getType()] = target->clone();
	}
}

void TargetGenerator::forgetTargetType(const std::string &targetname)
{
	std::map<std::string, ATarget *>::iterator it;

	it = _myTargets.find(targetname);
	if (it != _myTargets.end())
	{
		// delete it->second;
		_myTargets.erase(targetname);
	}

}

ATarget *TargetGenerator::createTarget(const std::string &targetname)
{
	std::map<std::string, ATarget *>::iterator it;

	it = _myTargets.find(targetname);
	if (it != _myTargets.end())
		return (_myTargets[targetname]);
	else
	return (NULL);

}