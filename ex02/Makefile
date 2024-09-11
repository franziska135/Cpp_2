# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmarggra <fmarggra@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 11:52:51 by fmarggra          #+#    #+#              #
#    Updated: 2024/09/03 16:05:28 by fmarggra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fixed
INC			= 	Fixed.hpp
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -g -std=c++98

AR		=	ar rc
RM		=	rm -f

SRC		=	main.cpp Fixed.cpp

OBJS	=	$(SRC:.cpp=.o)

.PHONY:		all clean fclean re bonus

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(CXX) $(OBJS) -o $(NAME)

%.o: %.cpp 	$(INC)
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean: 	clean
			$(RM) $(NAME)

re:			clean all
