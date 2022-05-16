# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbel-bas <mbel-bas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/03 18:22:57 by mbel-bas          #+#    #+#              #
#    Updated: 2022/04/03 18:23:28 by mbel-bas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= contact.cpp 
OBJS			= $(SRCS:.cpp=.o)

C++				= clang++
RM				= rm -f
C++FLAGS		= -Wall -Wextra -Werror -I.

NAME			= 

all:			$(NAME)

$(NAME):		$(OBJS)
				$(C++) $(C=++FLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)