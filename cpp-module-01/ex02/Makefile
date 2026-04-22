# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 13:24:38 by ahentton          #+#    #+#              #
#    Updated: 2025/05/02 13:34:41 by ahentton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++20 -Iinclude

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
