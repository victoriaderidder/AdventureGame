




#** Victoria Fisher
#** Makefile for Lab 10 
#** 6/9/2019
#** Used lecture video as reference.

default: main.cpp inputValidation.hpp inputValidation.cpp Character.cpp Character.hpp Forest.hpp Forest.cpp Gameplay.cpp Gameplay.hpp Insects.cpp Insects.hpp River.cpp River.hpp Snakes.cpp Snakes.hpp Space.cpp Space.hpp Wolves.cpp Wolves.hpp

	g++ -g -std=c++0x main.cpp inputValidation.hpp inputValidation.cpp Character.cpp Character.hpp Forest.hpp Forest.cpp Gameplay.cpp Gameplay.hpp Insects.hpp Insects.cpp River.cpp River.hpp Snakes.cpp Snakes.hpp Space.cpp Space.hpp Wolves.cpp Wolves.hpp -o game 
	
clean:
	$(RM) game 
