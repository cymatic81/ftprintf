# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchapman <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 15:59:27 by jchapman          #+#    #+#              #
#    Updated: 2022/11/18 14:28:06 by jchapman         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -Iheaders -g #remove "-g"
			
all: $(NAME)

PRINTF_SRCS	=	ft_printf.c \
				ft_initflags.c \
				ft_printformat.c \
				ft_resetflags.c \
				ft_subspecifier.c \
				ft_printfatoi.c \
				ft_printspecified.c \
				ft_setflags.c \
				ft_printchar.c \
				ft_printstr.c \
				ft_printdecimal.c \
				ft_printfitoa.c \
				ft_printhex.c \
				ft_printfxtoa.c \
				#add testpritf.c here

PRINTF_OBS = $(PRINTF_SRCS:.c=.o)

LIBFT: ./libft/libft.a
	
libft/libft.a:	
	cd libft && $(make) make bonus

%.o: %.c
	${CC} -c $(CFLAGS) $< -o $(<:.c=.o)

$(NAME): $(PRINTF_OBS) $(LIBFT)
	cd libft && $(make) make bonus
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(PRINTF_OBS) $(LIBFT)

clean:	
	rm -f $(PRINTF_OBS)
	cd libft && $(make) make clean

fclean:	clean
	rm -f $(NAME)
	cd libft && $(make) make fclean

re:	fclean all clean

test:	re
	rm -rf a.out
	rm -rf a.out.dSYM
	gcc -g $(NAME) $(LIBFT) testprintf.c
	./a.out	
