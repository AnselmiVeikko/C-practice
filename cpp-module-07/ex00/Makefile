NAME = templates

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++20 -MMD -MP

SRC = ./main.cpp

OBJ = $(SRC:.cpp=.o)

DEP = $(OBJ:.o=.d)
-include $(DEP)

%o:%.cpp
	$(CXX) $(CXXFLAGS) -c $@ -o @<

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
	 rm -rf $(OBJ)
	 rm -rf $(DEP)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re