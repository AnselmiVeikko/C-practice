# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/28 11:36:39 by ahentton          #+#    #+#              #
#    Updated: 2025/05/28 11:42:31 by ahentton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++20 -I./include

SRC = ./src/main.cpp \
      ./src/HumanA.cpp \
      ./src/HumanB.cpp \
      ./src/Weapon.cpp \

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
