NAME = libmx.a
CC = clang

RAW = printchar print_unicode printstr print_strarr printint pow sqrt \
	nbr_to_hex hex_to_nbr itoa foreach binary_search bubble_sort \
	\
	strlen swap_char str_reverse strdel del_strarr get_char_index strdup \
	strndup strcpy strncpy strcmp strncmp strcat strstr get_substr_index count_substr \
	count_words strnew strtrim del_extra_spaces strsplit strjoin file_to_str \
	replace_substr \
	\
	memset memcpy memccpy memcmp memchr memmem memrchr memmove \
	\
	isspace realloc create_node push_front push_back pop_front pop_back list_size sort_list

SRC_DIR = ./src/
OBJ_DIR = ./obj/

SRC = $(addprefix $(SRC_DIR), $(addprefix mx_, $(addsuffix .c, $(RAW))))
OBJ = $(addprefix $(OBJ_DIR), $(addprefix mx_, $(addsuffix .o, $(RAW))))

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
LFLAGS = -Iinc

all: install clean

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(LFLAGS) -o $@ -c $<

install: $(OBJ_DIR) $(OBJ)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ_DIR)

uninstall:
	@rm -rf $(NAME)
	@rm -rf $(OBJ_DIR)

reinstall: uninstall all