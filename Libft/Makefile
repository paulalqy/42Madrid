NAME = libft.a

SRCS		=  ft_bzero.c \
			  ft_isalnum.c \
			  ft_isalpha.c \
			  ft_isascii.c \
			  ft_isdigit.c \
			  ft_isprint.c \
			  ft_memcpy.c \
			  ft_memmove.c \
			  ft_memset.c \
			  ft_strlcat.c \
			  ft_strlcpy.c \
			  ft_strlen.c 

OBJS		= ${SRCS:.c=.o}
NAME		= libft.a
CC			= gcc -Wall -Wextra -Werror

%.o: %.c libft.h
			${CC} -I. -c $< -o ${<:.c=.o}

all:		${NAME}

$(NAME):	${OBJS} libft.h
			ar rcs ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re bonus