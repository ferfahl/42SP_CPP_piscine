#include "Warlock.hpp"

Warlock::Warlock() {
	return ;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	_list.begin();
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

// learnSpell, takes a pointer to ASpell, that makes the Warlock learn a spell
void	Warlock::learnSpell(ASpell *spell) {
	for (int i = 0; i < this->_list.size(); i++) {
		if (this->_list[i]->getName() == spell->getName())
			return ;
	}
	this->_list.push_back(spell->clone());
}

// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
void	Warlock::forgetSpell(std::string spellName) {
	for (int i = 0; i < this->_list.size(); i++) {
		if (this->_list[i]->getName() == spellName)
			this->_list.erase(this->_list.begin() + i);
	}
}

// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.
void	Warlock::launchSpell(std::string spellName, ATarget &target) {
	for (int i = 0; i < this->_list.size(); i++) {
		if (this->_list[i]->getName() == spellName)
		{
			target.getHitBySpell(*this->_list[i]);
			return ;
		}
	}
	std::cout << this->_name << ": Can't do the spell!" << std::endl;
}
