NAME = libft.a

DELETE = rm

COMPILER = gcc

LIB = ar rcs

LIBRARY = libft.h

FLAGS = -Wall -Werror -Wextra

SOURCE = ft_isdigit.c ft_memset.c ft_strnstr.c ft_atoi.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_bzero.c ft_memchr.c ft_strlcat.c ft_tolower.c ft_isalnum.c ft_memcmp.c ft_strlcpy.c ft_toupper.c ft_isalpha.c ft_memcpy.c ft_strlen.c ft_isascii.c ft_memmove.c ft_strncmp.c 

OBJ = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(LIBRARY)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(COMPILER) $(FLAGS) -c -o $@ $<

clean:
	$(DELETE) $(OBJ)
	
fclean: clean
	$(DELETE) $(NAME)
