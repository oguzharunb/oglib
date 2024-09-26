GCC = cc
FLAGS = -Wall -Werror -Wextra
NAME = oglib.a
HEADER = oglib.h
HEADER_PROT = prototype.h
ARCH = ar
FILENAME_SCRAPER = ./setup.sh
PROTOTYPE_PLACER = ./set_prototypes.sh
SRC := $(shell $(FILENAME_SCRAPER)) #finds the existing files 


OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(HEADER)
	$(GCC) $(FLAGS) -c $(SRC)

$(HEADER): $(SRC)
	cp $(HEADER_PROT) $(HEADER)
	$(PROTOTYPE_PLACER) $(HEADER) $(SRC)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
