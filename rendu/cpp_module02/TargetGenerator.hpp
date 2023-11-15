#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
	private:
	std::map<std::string, ATarget *> _myTargets;

	TargetGenerator(const TargetGenerator &copy);
	TargetGenerator &operator=(const TargetGenerator &rhs);

	public:

	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(const std::string &targetname);
	ATarget* createTarget(std::string const &targetname);
};