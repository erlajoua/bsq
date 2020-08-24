# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: malatini <malatini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 12:47:14 by malatini          #+#    #+#              #
#    Updated: 2020/08/24 18:18:10 by malatini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= //tous les .c
NAME	= BSQ
CFLAGS	= -Wall -Wextra -Werror
CC		= gcc
RM		= rm -f

${NAME}:
			${CC} ${SRCS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean
			all
