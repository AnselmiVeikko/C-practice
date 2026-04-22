# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/04 10:24:38 by ahentton          #+#    #+#              #
#    Updated: 2025/06/04 10:28:05 by ahentton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = nbfix

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++20 -I./include

SRC = ./src/Fixed.cpp \
      ./src/main.cpp

OBJ = $(SRC:.cpp=.o)

%o:.%.cpp
	$(CXX) $(CXXFLAGS) -c @$ -o @<

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
