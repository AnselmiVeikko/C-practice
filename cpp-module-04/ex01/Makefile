# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/26 13:35:39 by ahentton          #+#    #+#              #
#    Updated: 2025/06/26 13:44:59 by ahentton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -I./include

SRC = ./src/main.cpp \
      ./src/Animal.cpp \
      ./src/Dog.cpp \
      ./src/Cat.cpp \
      ./src/WrongAnimal.cpp \
      ./src/WrongCat.cpp \
      ./src/Brain.cpp \

OBJ = $(SRC:.cpp=.o)

%o:%.cpp
	$(CXX) $(CXXFLAGS) -c $@ -o @<

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
