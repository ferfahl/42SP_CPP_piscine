#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <vector>

class ASpell;

class SpellBook {
	private:
		std::vector<ASpell *> _book;

	public:
		SpellBook(void);
		~SpellBook(void);

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spell);
		ASpell *createSpell(std::string const &spell);
};

#endif