
COMPILE_FLAG = -g -Wall -Wextra -Werror -I. -c
NAME = libft.a
FILES = 		ft_strlen.c \
			ft_atoi.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strncat.c \
			ft_strncmp.c \
			ft_strncpy.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_strstr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_memset.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_strcat.c \
			ft_strchr.c \
			ft_strcmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_strsub.c \
			ft_putchar_fd.c \
			ft_putchar.c \
			ft_putstr_fd.c \
			ft_putstr.c \
			ft_strtrim.c \
			ft_putendl_fd.c \
			ft_putendl.c \
			ft_putnbr_fd.c \
			ft_putnbr.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_itoa.c \
			ft_strsplit.c \
			ft_lstnew.c \
			ft_lstdelone.c \
			ft_lstdel.c \
			ft_lstadd.c \
			ft_lstiter.c \
			ft_isupper.c \
			ft_islower.c \
			ft_intlen.c \
			ft_strndup.c \
			ft_lstmap.c \
			ft_define_words_count.c

OBJ	= $(FILES:%.c=%.o)



all: $(NAME)

copy:
	cp -f libc-funcs/*.c .
	cp -f additional-funcs/*.c .
	cp -f bonus-funcs/*.c .
	cp -f personal-funcs/*.c .


$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

$(OBJ): $(FILES)
		gcc $(COMPILE_FLAG) $(FILES)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
