NAME=program
SRCS=main.cpp
G=g++
GFLAGS=-Wall -Werror -Wextra -std=c++98
OBJS=$(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):$(OBJS)
	$(G) $(GFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(G) $(GFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re