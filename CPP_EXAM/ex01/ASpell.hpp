#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>

# include "ATarget.hpp"

class ATarget;

class ASpell {
	protected:
		std::string	_name;
		std::string	_effects;
		ASpell();
	public:
		ASpell(std::string name, std::string effects);
		ASpell(ASpell const& rhs);
		~ASpell();
		ASpell& operator=(ASpell const& rhs);

		std::string		getName() const;
		std::string		getEffects() const;
		virtual ASpell	*clone() const = 0;

		void			attack(ATarget const& target) const;
};

#endif