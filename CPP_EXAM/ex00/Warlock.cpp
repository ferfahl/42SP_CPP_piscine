#include "Warlock.hpp"

Warlock::Warlock() {
	return ;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

std::string	Warlock::getName() const {
	return this->_name;
}

std::string	Warlock::getTitle() const {
	return this->_title;
}

void		Warlock::setTitle(std::string title) {
	this->_title = title;
}

void		Warlock::introduce() {
	std::cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << std::endl;
}