# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/14 21:05:45 by mbel-bas          #+#    #+#              #
#    Updated: 2023/06/19 07:44:12 by mbel-bas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 

NAME = phonebook
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -STD=c++98
OBJS = ${SRCS:.cpp=.o}



${NAME}:	${OBJS}
			${CC} ${FLAGS} ${SRCS} -o ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re
