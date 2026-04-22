NAME = RPN

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++20

SRC = ./main.cpp \
	  ./RPN.cpp

OBJ = $(SRC:.cpp=.o)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
