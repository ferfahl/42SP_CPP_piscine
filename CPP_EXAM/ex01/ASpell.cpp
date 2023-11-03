#include "ASpell.hpp"

ASpell::ASpell() {
	return ;
}

ASpell::ASpell(std::string name, std::string effects) {
	this->_name = name;
	this->_effects = effects;
}

ASpell::ASpell(ASpell const& rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_effects = rhs.getEffects();
	}
	return ;
}
 
ASpell::~ASpell() {
	return ;
}

ASpell &ASpell::operator=(ASpell const& rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		this->_effects = rhs.getEffects();
	}
	return *this;
}

std::string	ASpell::getName() const {
	return this->_name;
}

std::string	ASpell::getEffects() const {
	return this->_effects;
}

void	ASpell::attack(ATarget const& target) const {
	target.getHitBySpell((*this));
}