# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 12:58:02 by rhee              #+#    #+#              #
#    Updated: 2021/08/11 16:33:52 by rhee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Materia

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp ICharacter.cpp IMateriaSource.cpp MateriaSource.cpp
OBJS = $(SRCS:.cpp=.o)
INC = AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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