#pragma once

#include<iostream>

class Warlock
{
	private:
	std::string _name;
	std::string _title;

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
};