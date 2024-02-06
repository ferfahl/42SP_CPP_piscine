#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
	_dummies.clear();
	_dummies.begin();
}

TargetGenerator::~TargetGenerator() {
	_dummies.clear();
}

void TargetGenerator::learnTargetType(ATarget *target) {
	for (size_t i = 0; i < this->_dummies.size(); i++) {
		if (this->_dummies[i]->getType() == target->getType())
			return ;
	}
	this->_dummies.push_back(target->clone());
}

void TargetGenerator::forgetTargetType(std::string const &target) {
	for (size_t i = 0; i < this->_dummies.size(); i++) {
		if (this->_dummies[i]->getType() == target)
			this->_dummies.erase(this->_dummies.begin() + i);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &target) {
	for (size_t i = 0; i < this->_dummies.size(); i++) {
		if (this->_dummies[i]->getType() == target)
			return _dummies[i];
	}
	return NULL;
}