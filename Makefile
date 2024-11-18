CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEAD = libft.h

SRCMANDATORY =	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

SRCBONUS =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \

OBJMANDATORY = $(SRCMANDATORY:.c=.o)

all: $(NAME)
	rm -f $(OBJMANDATORY)

%.o: %.c $(HEAD) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJMANDATORY)
	ar -rcs $(NAME) $(OBJMANDATORY)
clean:
	rm -f $(OBJMANDATORY)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
