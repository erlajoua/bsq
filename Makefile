SRC		= srcs/main.c srcs/algo.c srcs/algo2.c srcs/error_handling.c srcs/extract_first_line.c srcs/memory.c srcs/utils.c srcs/variables.c srcs/parsing_in_tab.c

OBJS	= ${SRC:.c=.o}

NAME	= BSQ

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
					${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
					${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
					${RM} ${OBJS}

fclean:		clean
					${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
