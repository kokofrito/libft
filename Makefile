NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SOURCE = ft_isdigit.c ft_memset.c ft_strnstr.c ft_atoi.c ft_isprint.c ft_strchr.c ft_strrchr.c ft_bzero.c ft_memchr.c ft_strlcat.c ft_tolower.c ft_isalnum.c ft_memcmp.c ft_strlcpy.c ft_toupper.c ft_isalpha.c ft_memcpy.c ft_strlen.c libft.h ft_isascii.c ft_memmove.c ft_strncmp.c 

all:
	gcc -o $(NAME) $(FLAGS) $(SOURCE)
