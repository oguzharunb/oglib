GCC = cc
FLAGS = -Wall -Werror -Wextra
NAME = oglib.a
HEADER = oglib.h
ARCH = ar
FILENAME_SCRAPER = ./setup.sh
PROTOTYPE_PLACER = ./set_prototypes.sh
SRC := $(shell $(FILENAME_SCRAPER)) #finds the existing files 


OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC) $(HEADER)
	cp $(HEADER) temp_$(HEADER)
	$(PROTOTYPE_PLACER) $(HEADER) $(SRC)
	$(GCC) $(FLAGS) -c $(SRC)
	mv temp_$(HEADER) $(HEADER)
	rm temp_$(HEADER)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
