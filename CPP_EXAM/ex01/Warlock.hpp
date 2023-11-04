#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <vector>

# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock {
	private:
		std::string				_name;
		std::string				_title;
		std::vector<ASpell*>	_list;
		Warlock();
	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string	getName() const;
		std::string	getTitle() const;
		void		setTitle(std::string title);
		void		introduce();

		void		launchSpell(std::string spellName, ATarget &target);
		void		forgetSpell(std::string spellName);
		void		learnSpell(ASpell *spell);
};

#endif