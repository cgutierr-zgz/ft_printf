# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgutierr <cgutierr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/20 20:07:40 by cgutierr          #+#    #+#              #
#    Updated: 2021/03/01 19:19:53 by cgutierr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DAY				=	$(shell date +'%d/%m/%Y %H:%M')

NAME			=	libftprintf.a

SRCS			=	./srcs/ft_printf.c \
					./srcs/ft_flags.c \
					./srcs/ft_handle_c_pct.c \
					./srcs/ft_handle_p.c \
					./srcs/ft_handle_s.c \
					./srcs/ft_handle_u.c \
					./srcs/ft_handle_x_x.c \
					./srcs/ft_handle_d_i.c \
					./srcs/ft_bonus.c
					
HEADER			=	./includes/ft_printf.h
					
OBJS			=	$(SRCS:.c=.o)

CC				=	gcc

FLAGS			=	-Wall -Werror -Wextra

RM				=	rm -f

LIBFTPATH		=	./libft/

LIBFTNAME		=	libft.a

LIBFT			=	$(LIBFTPATH)$(LIBFTNAME)

GREEN:="\033[1;32m"

all:			$(LIBFT) $(NAME)
				ar -rcs $(NAME) $(LIBFTPATH)*.o

$(NAME):		$(OBJS)
				ar -rc $(NAME) $(OBJS)
				ar -s $(NAME)

$(LIBFT):		
				make -C $(LIBFTPATH)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

#Easily push content to our repo
git:
				git add .
				git commit -m "$(DAY)"
				git push -u origin master

#Easily execute your main (No warnings, just in case if u try something weird)
exe:
				@gcc -w main.c -L. -lftprintf
				@./a.out

exe_c:
				@gcc -w main.c -L. -lftprintf
				@./a.out c

exe_pct:
				@gcc -w main.c -L. -lftprintf
				@./a.out %

exe_s:
				@gcc -w main.c -L. -lftprintf
				@./a.out s

exe_d:
				@gcc -w main.c -L. -lftprintf
				@./a.out d

exe_i:
				@gcc -w main.c -L. -lftprintf
				@./a.out i

exe_p:
				@gcc -w main.c -L. -lftprintf
				@./a.out p

exe_x:
				@gcc -w main.c -L. -lftprintf
				@./a.out x

exe_X:
				@gcc -w main.c -L. -lftprintf
				@./a.out X

exe_u:
				@gcc -w main.c -L. -lftprintf
				@./a.out u

exe_mix:
				@gcc -w main.c -L. -lftprintf
				@./a.out A

exe_bonus_n:
				@gcc -w main.c -L. -lftprintf
				@./a.out n

#Easily check the norme
norminette:
				@echo $(GREEN)
				@norminette -R CheckForbiddenSourceHeader $(SRCS) $(HEADER) ./libft/*.c ./libft/*.h
				
.PHONY:			all clean fclean re
