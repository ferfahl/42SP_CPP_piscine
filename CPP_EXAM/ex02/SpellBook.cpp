#include "SpellBook.hpp"

SpellBook::SpellBook() {
	_book.clear();
	_book.begin();
}

SpellBook::~SpellBook() {
	_book.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
	for (size_t i = 0; i < this->_book.size(); i++) {
		if (this->_book[i]->getName() == spell->getName())
			return ;
	}
	this->_book.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spell) {
	for (size_t i = 0; i < this->_book.size(); i++) {
		if (this->_book[i]->getName() == spell)
			this->_book.erase(this->_book.begin() + i);
	}
}

ASpell *SpellBook::createSpell(std::string const &spell) {
	for (size_t i = 0; i < this->_book.size(); i++) {
		if (this->_book[i]->getName() == spell)
			return _book[i];
	}
	return NULL;
}