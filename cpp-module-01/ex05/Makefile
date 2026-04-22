# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/03 16:50:32 by ahentton          #+#    #+#              #
#    Updated: 2025/06/12 15:06:42 by ahentton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++20 -I./include

SRC = ./src/Harl.cpp \
      ./src/main.cpp

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
