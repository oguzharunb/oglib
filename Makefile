GCC = cc
FLAGS = -Wall -Werror -Wextra
NAME = oglib.a
ARCH = ar
SRC =	og_memset.c \
	og_bzero.c \
	og_read.c \
 	og_memcpy.c \
	og_write.c

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(GCC) $(FLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
