GCC = cc
FLAGS = -Wall -Werror -Wextra
NAME = oglib.a
HEADER = oglib.h
HEADER_PROT = prototype.h
ARCH = ar
FILENAME_SCRAPER = ./scrape_fnames.sh
PROTOTYPE_PLACER = ./set_prototypes.sh
SRC := $(shell $(FILENAME_SCRAPER)) #finds the existing files 
RM = rm -rf
ARCH = ar

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(HEADER) $(OBJ)
	@echo "***Creating static library $(NAME)***"
	$(ARCH) rcs $(NAME) $(OBJ)

%.o: %.c
	@echo "***Compiling $<***"
	$(GCC) $(FLAGS) -c $< -o $@

$(HEADER): $(SRC) $(HEADER_PROT)
	@echo "***Generating $(HEADER) from $(HEADER_PROT)***"
	cp $(HEADER_PROT) $(HEADER)
	$(PROTOTYPE_PLACER) $(HEADER) $(SRC)

clean:
	@echo "***Cleaning object files...***"
	$(RM) $(OBJ)

fclean: clean
	@echo "***Cleaning library and header...***"
	$(RM) $(OBJ)
	$(RM) $(NAME)
	$(RM) $(HEADER)

re: fclean all

.PHONY: clean fclean all re
