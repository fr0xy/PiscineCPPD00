NAME		= agenda

SRC			= main.cpp Contact.cpp Agenda.cpp
OBJ			= main.o Contact.o Agenda.o

CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
# CXXFLAGS   += -O3 -march=native -pipe -flto

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory