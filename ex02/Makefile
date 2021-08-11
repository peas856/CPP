# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 12:58:02 by rhee              #+#    #+#              #
#    Updated: 2021/08/10 13:52:54 by rhee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)
INC = Animal.hpp Cat.hpp Dog.hpp Brain.hpp

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	clang++ $(FLAGS) -o $(NAME) $(OBJS)
.c.o:
	clang++ $(FLAGS) -c $< -o $(OBJS) -I $(INC)
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re