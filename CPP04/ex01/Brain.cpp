/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feralves <feralves@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:31:06 by feralves          #+#    #+#             */
/*   Updated: 2023/09/10 22:28:21 by feralves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Copy Brain constructor called" << std::endl;
	*this = copy;
	return ;
}

Brain::~Brain()
{
	std::cout << "Destructor for Brain called" << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain& copy)
{
	std::cout << "Copy Brain assignation called" << std::endl;
	if (this != &copy)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = copy._ideas[i];
	}
	return (*this);
}

void	Brain::setIdea(int index, std::string idea)
{
	_ideas[index] = idea;
	return ;
}

std::string Brain::getIdea(void) const
{
	return (_ideas[rand() % 100]);
}

std::string	Brain::getIdea(int index) const
{
	return(_ideas[index]);
}

std::string	Brain::getIdea(int index, std::string type) const
{
	if (type == "cat")
		return (_ideasCats[index]);
	else if (type == "dog")
		return (_ideasDogs[index]);
	else
		return ("Jacha-chacha-chacha-chow!");
}

std::string	Brain::_ideasCats[100] = {
	"Is it dinner time yet?",
	"I wonder what's under the couch today.",
	"Time for a nap in the sun.",
	"I could be a great hunter if I wanted to.",
	"Why do humans insist on vacuuming?",
	"The window is my TV.",
	"This cardboard box is my new kingdom.",
	"Must groom to maintain my elegant appearance.",
	"I hear a bird outside!",
	"The sunbeam moved. I must follow it.",
	"My humans better appreciate my purring.",
	"A soft blanket - the perfect spot to knead.",
	"I'm the master of stealth.",
	"I should check the food bowl, just in case.",
	"Time to chase my tail.",
	"I wish I could catch that laser dot.",
	"What's that moving on the wall?",
	"I'll show my affection by headbutting the humans.",
	"I'm a cat, and I do what I want.",
	"Let's knock something off the table for fun.",
	"I hope I don't have to go to the vet soon.",
	"I miss that sunny spot by the window.",
	"Why is there a red dot on the wall?",
	"I'm not fat; I'm just pleasantly plump.",
	"Time to curl up in a cozy ball.",
	"The garden is my outdoor kingdom.",
	"I'll knock this cup off the counter.",
	"I'm an excellent judge of character.",
	"I'll stare at the door until someone opens it.",
	"The feather toy is irresistible.",
	"Why is the dog getting too close?",
	"I hear rain outside. Glad I'm indoors.",
	"The keyboard is the warmest spot in the house.",
	"I'm too cute for my own good.",
	"I should practice my pouncing skills.",
	"I'm getting tired. Time for another nap.",
	"Time to stalk my toy mouse.",
	"I'm a stealthy ninja cat.",
	"Is that a bug on the ceiling?",
	"The outside world is so mysterious.",
	"I wonder what's on the other side of this door?",
	"I'm a cat on a mission.",
	"I'll ignore my human's calls for now.",
	"Time for a midnight sprint around the house.",
	"The sound of a can opener is music to my ears.",
	"I'll curl up in the laundry for a cozy nap.",
	"I'm an excellent nap taker.",
	"I hope the humans don't forget my birthday.",
	"Why do my toys keep disappearing?",
	"I could climb that bookshelf if I tried.",
	"I should explore that closet sometime.",
	"I love it when they scratch behind my ears.",
	"I'll pretend I'm invisible in a cardboard box.",
	"Why do they always take my picture?",
	"I'm a hunter, even if it's just a toy.",
	"I wonder what's in this bag? Let me explore.",
	"I should check the trash can for treasures.",
	"The litter box needs some attention.",
	"I love it when they throw my toy for me.",
	"I hope I could catch that bird outside.",
	"I wonder if I'd like that catnip.",
	"I'm so graceful when I walk.",
	"I should chase my own shadow for fun.",
	"Why is the sink faucet so fascinating?",
	"I'll bring them a 'gift' from the garden.",
	"Is that a new piece of furniture?",
	"I'm a cat with an independent spirit.",
	"I wonder if there are treats nearby.",
	"I'll just sit here and look cute.",
	"I should check if the neighbors are home.",
	"I hope they share their food with me.",
	"Time to chew on this cardboard.",
	"Why is there a strange noise in the basement?",
	"I love it when they pet me.",
	"Is it time for my daily nap?",
	"I wonder what's in that bag they brought home.",
	"I'm the ruler of this couch.",
	"Why is there a cat in my yard?",
	"I'll sit on this book because I can.",
	"Why do I have to wear this collar?",
	"I should knock this pen off the table for fun.",
	"The world is full of interesting smells.",
	"I'll curl up in my favorite sunbeam.",
	"I hope they take me outside today.",
	"I could be a model with my good looks.",
	"Why do they always close the door behind them?",
	"I'm a cat who enjoys the finer things in life.",
	"I'll watch the world go by from the window.",
	"I wonder if I'll find any buried treasures today.",
	"I'll follow my human around the house.",
	"I should greet the neighbors with a meow.",
	"I love it when they play with me.",
	"I'm a good hunter, even if it's just toys.",
	"I wonder what's in that mysterious closet.",
	"I'll bat at that dangling cord.",
	"The world is full of mysteries to explore.",
	"Why do they put clothes on me sometimes?",
	"I hope they take me on an adventure.",
	"I'll scratch this post to sharpen my claws.",
	"I'm a content and happy cat."
};

std::string	Brain::_ideasDogs[100] = {
	"Is it time for breakfast yet?",
	"I love the way my human smells.",
	"Squirrel! Must bark and chase.",
	"Belly rubs are the best.",
	"Why do they leave me every morning?",
	"I hope the mailman comes today.",
	"Let's play fetch, please!",
	"This bone is my most prized possession.",
	"I should check if the neighbors are home.",
	"Nap time in my comfy bed.",
	"Treats, treats, treats!",
	"My tail is following me again.",
	"I hear a car approaching. Who could it be?",
	"Is it time for a walk?",
	"I wonder what's on the other side of the fence.",
	"Must protect the house from intruders.",
	"Why do they always take my picture?",
	"Rainy days are no fun.",
	"I wish I could catch that bird in the yard.",
	"I should go beg for food at the dinner table.",
	"I love riding in the car.",
	"Who's that dog on TV? I should say hi.",
	"Time to chase my own shadow.",
	"Is that a toy I see under the couch?",
	"Why do they keep throwing my ball away?",
	"Why does the cat get to go on the furniture?",
	"Can I have a taste of what you're eating?",
	"I miss my doggy friends at the park.",
	"I'm a good boy/girl, and I deserve treats.",
	"I hope my human isn't mad at me.",
	"The sun feels so warm on my fur.",
	"I'd love to go on an adventure.",
	"Why does the vacuum cleaner always chase me?",
	"I'll stare out the window and guard the house.",
	"I wish I could jump as high as that squirrel.",
	"That squirrel is teasing me again.",
	"I love it when they scratch behind my ears.",
	"I hear a funny noise in the closet.",
	"I should check the trash can for treasures.",
	"The park is my favorite place in the world.",
	"I wonder if I'll get a new toy today.",
	"Time to chase my own tail in circles.",
	"I hope we go for a walk soon.",
	"Can I have a bite of your sandwich?",
	"Why is the neighbor's dog barking?",
	"I'll just sit here and look cute.",
	"Time for a game of tug-of-war!",
	"Bath time is the worst time.",
	"I wonder if I'll see my reflection in the mirror.",
	"Is it bedtime yet? I'm sleepy.",
	"Did someone mention 'walk'?",
	"I should follow my human around the house.",
	"I love it when they throw the frisbee.",
	"I wish I could catch those birds in the sky.",
	"I'm so excited when someone comes home.",
	"What's that delicious smell coming from the kitchen?",
	"Why do they put clothes on me sometimes?",
	"I hope we go to the dog park today.",
	"I should bring them my favorite toy to play.",
	"I wonder if I'll meet any new doggy friends today.",
	"The couch is the best spot for a nap.",
	"I need to mark my territory outside.",
	"Is it time for my favorite TV show?",
	"I'll wag my tail to show I'm happy.",
	"Is that the sound of a tennis ball bouncing?",
	"I love it when they rub my belly.",
	"Why do I have to wear this leash?",
	"I hope they share their ice cream with me.",
	"I wonder what's in that bag they brought home.",
	"I should greet the neighbors with a bark.",
	"The doorbell rang! Who could it be?",
	"I wish I could jump as high as the counter.",
	"I hope my human comes home soon.",
	"Why is there a cat in my yard?",
	"I'll protect the family from the evil vacuum cleaner.",
	"Time to dig a hole in the backyard.",
	"I wonder if I'll find any buried treasures today.",
	"I love the feeling of grass under my paws.",
	"I'll sit by the door and wait for a walk.",
	"I hope they take me on a car ride.",
	"Why do they always take me to the vet?",
	"I should roll on my back and ask for a belly rub.",
	"I'll chew on this stick for a while.",
	"I hear the sound of a dog treat bag opening.",
	"I'm so excited when they come home from work.",
	"I hope I get to meet other dogs at the park.",
	"The world is full of interesting smells.",
	"I'll watch over the house from the window.",
	"I wonder if I can catch that fly buzzing around.",
	"I love it when they scratch my back.",
	"Is it time for my special doggy treats?",
	"I should roll in the grass to get that nice scent.",
	"I'll bark at the mailman to protect the house.",
	"I'm a happy dog, and life is great!",
	"I'll sit here patiently and wait for a treat.",
	"I'm a good dog, and I deserve lots of love.",
	"I'll curl up in my dog bed and take a nap.",
	"I hope they take me to the beach someday.",
	"I love it when they throw the ball for me to fetch.",
	"I'm a content and loyal companion."
};
