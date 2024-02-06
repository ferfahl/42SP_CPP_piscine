#include "Warlock.hpp"

Warlock::Warlock() {
	return ;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	_list = new SpellBook();
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
	_list->learnSpell(spell);
}

// * forgetSpell, takes a string corresponding a to a spell's name, and makes the
//   Warlock forget it. If it's not a known spell, does nothing.
void	Warlock::forgetSpell(std::string spellName) {
	_list->forgetSpell(spellName);
}

// * launchSpell, takes a string (a spell name) and a reference to ATarget, that
//   launches the spell on the selected target. If it's not a known spell, does
//   nothing.
void	Warlock::launchSpell(std::string spellName, ATarget &target) {
	if (_list->createSpell(spellName)) {
		target.getHitBySpell(*_list->createSpell(spellName));
		return ;
	}
	std::cout << this->_name << ": Can't do the spell!" << std::endl;
}
