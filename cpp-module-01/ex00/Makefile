# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/02 11:24:49 by ahentton          #+#    #+#              #
#    Updated: 2025/06/02 11:58:51 by ahentton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++20 -I./include

SRC = ./src/Zombie.cpp \
      ./src/newZombie.cpp \
      ./src/randomChump.cpp \
      ./src/main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
