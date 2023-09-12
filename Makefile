NAME = libft.a

FLAGS = -Wall -Werror -Wextra

SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c

all:
	gcc -o $(NAME) $(FLAGS) $(SOURCE)
