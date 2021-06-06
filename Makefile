# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prochell <prochell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 16:33:36 by locus2            #+#    #+#              #
#    Updated: 2021/05/20 13:34:39 by prochell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= get_next_line
CFLAGS		= -Wall -Wextra -Werror -g
CC			= gcc

INCLUDE 	= get_next_line.h
SRCS 		= get_next_line_utils.c get_next_line.c

INCLUDE_BONUS 	= get_next_line_bonus.h
SRCS_BONUS 		= get_next_line_utils_bonus.c get_next_line_bonus.c

test:
	@$(CC) $(CFLAGS) main.c $(SRCS) -I $(INCLUDE) && ./a.out | cat -e

bonus:
	@$(CC) $(CFLAGS) main.c $(SRCS_BONUS) -I $(INCLUDE_BONUS) && ./a.out | cat -e

norm:
	norminette .

clean:
	@/bin/rm -f a.out
