NAME=Animal
SRCS=Dog.cpp main.cpp Cat.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
CXXFLAGS=-Wall -Werror -Wextra -std=c++98
CXX=c++
OBJS=$(SRCS:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.cpp:%.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:all clean fclean re