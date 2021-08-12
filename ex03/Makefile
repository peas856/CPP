# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhee <rhee@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/03 12:58:02 by rhee              #+#    #+#              #
#    Updated: 2021/08/12 14:01:18 by rhee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

SRCS = Bureaucrat.cpp main.cpp Form.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp
OBJS = $(SRCS:.cpp=.o)
INC = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp Intern.hpp

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