# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahentton <ahentton@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/31 10:48:28 by ahentton          #+#    #+#              #
#    Updated: 2025/07/31 10:55:15 by ahentton         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++20 -I./include

SRC = Bureaucrat.cpp \
	  main.cpp

OBJ = $(SRC:.cpp=.o)

%o:%.cpp
		$(CXX) $(CXXFLAGS) -c $@ -o @<

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)


clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re