.PHONY:all install reinstall clean
NAME = minlibmx.a
CFLAGS = -Wall -Wextra -Werror -Wpedantic
OBJDIR = /obj
INCLDIR = /inc
SOURCEDIR = $(addprefix src/, $(SOURCEFILES))
SOURCEFILES = 	mx_atoi.c mx_concat_words.c mx_count_words.c \
				mx_get_address.c mx_hex_to_nbr.c mx_isalpha.c \
				mx_isdigit.c mx_islower.c mx_isspace.c mx_isupper.c \
				mx_nbr_to_hex.c mx_print_arr_int.c mx_printchar.c \
				mx_printint.c mx_printstr.c mx_sort_arr_int.c mx_strcat.c \
				mx_strchr.c mx_strcmp.c mx_strcpy.c mx_strdel.c \
				mx_strdup.c mx_strjoin.c mx_strlen.c mx_strncmp.c \
				mx_strncpy.c mx_strnew.c mx_strstr.c mx_strtrim.c \
				mx_tolower.c mx_toupper.c mx_itoa.c
OBJECTSFILES = $(SOURCEFILES:%.c=%.o)
INCLUDES = minlibmx.h

all: $(NAME)

$(NAME):
	clang $(CFLAGS) -c $(SOURCEDIR)
	ar rc $(NAME) $(OBJECTSFILES)
	ranlib $(NAME)

install: all


uninstall:
	-rm $(OBJECTSFILES) $(NAME)
	-rm -rf $(OBJDIR)

clean:
	-rm $(OBJECTSFILES)

reinstall: 
	clean install