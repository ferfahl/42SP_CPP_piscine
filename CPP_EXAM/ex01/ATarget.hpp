#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string	_type;
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(ATarget const& rhs);
		~ATarget();
		ATarget &operator=(ATarget const& rhs);

		std::string	getType() const;
		virtual ATarget	*clone() const = 0;

		void		getHitBySpell(ASpell const& spell) const;
};

#endif