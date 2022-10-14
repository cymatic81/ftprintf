# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchapman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 15:59:27 by jchapman          #+#    #+#              #
#    Updated: 2022/10/14 14:08:43 by jchapman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -Iheaders
			
all: $(NAME)

PRINTF_SRCS	=	ft_printf.c \
				testprintf.c \

PRINTF_OBS = $(PRINTF_SRCS:.c=.o)

LIBFT: ./libft/libft.a
	
libft/libft.a:	
	cd libft && $(make) make bonus

%.o: %.c
	${CC} -c $(CFLAGS) $< -o $(<:.c=.o)

$(NAME): $(PRINTF_OBS) $(LIBFT)
	ar -rcs $(NAME) $(PRINTF_OBS) $(LIBFT)

clean:	
	rm -f $(PRINTF_OBS)
	cd libft && $(make) make clean

fclean:	clean
	rm -f $(NAME)
	cd libft && $(make) make fclean

re:	fclean all clean

test:	re
	gcc $(NAME) $(LIBFT) testprintf.c
	./a.out	
	rm -rf a.out

