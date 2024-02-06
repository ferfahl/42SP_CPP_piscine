
#include "ATarget.hpp"

ATarget::ATarget() {
	return ;
}

ATarget::ATarget(std::string type) {
	this->_type = type;
}

ATarget::ATarget(ATarget const& rhs) {
	if (this != &rhs)
		this->_type = rhs.getType();
}

ATarget::~ATarget() {
	return ;
}
ATarget &ATarget::operator=(ATarget const& rhs) {
	if (this->_type != rhs.getType())
		this->_type = rhs.getType();
	return *this;
}

std::string	ATarget::getType() const {
	return this->_type;
}

void		ATarget::getHitBySpell(ASpell const& spell) const {
	std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}