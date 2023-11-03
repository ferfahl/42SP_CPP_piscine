#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock {
	private:
		std::string	_name;
		std::string	_title;
		Warlock();
	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string	getName() const;
		std::string	getTitle() const;
		void		setTitle(std::string title);
		void		introduce();
};

#endif