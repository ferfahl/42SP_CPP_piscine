#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"

# include <vector>

class ATarget;

class TargetGenerator {
	private:
		std::vector <ATarget *>	_dummies;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &target);
		ATarget* createTarget(std::string const &target);
};

#endif