NAME=fixed
SRCS=main.cpp Fixed.cpp
OBJS=$(SRCS:.cpp=.o)
CXX=g++
CXXFLAGS=-Wall -Wextra -Werror -std=c++98

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.cpp:%.o
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf  $(OBJS)

fclean:clean
	rm -rf $(NAME)

re:fclean all

.PHONY:all clean fclean re
