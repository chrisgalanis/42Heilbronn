COMPILE = cc
WFLAGS = -Wall -Wextra -Werror
SRC_FILES = main.c output.cc
NAME = rush-02

all: $(NAME)

$(NAME): $(SRC_FILES)
	$(CC) $(WFLAGS) $(SRC_FILES) -o $(NAME)

fclean:
	rm -f $(NAME)