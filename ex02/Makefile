# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 12:58:02 by rhee              #+#    #+#              #
#    Updated: 2021/08/17 18:16:16 by rhee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
INC = Array.hpp

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