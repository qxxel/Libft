# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agerbaud <agerbaud@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 12:34:17 by agerbaud          #+#    #+#              #
#    Updated: 2025/09/18 22:27:26 by agerbaud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = includes/libft.h
SRCS =	srcs/checkers/ft_isalnum.c		\
		srcs/checkers/ft_isalpha.c		\
		srcs/checkers/ft_isascii.c		\
		srcs/checkers/ft_isdigit.c		\
		srcs/checkers/ft_isprint.c		\
		srcs/display/ft_putchar_fd.c	\
		srcs/display/ft_putendl_fd.c	\
		srcs/display/ft_putnbr_fd.c		\
		srcs/display/ft_putstr_fd.c		\
		srcs/list/ft_lstadd_back.c		\
		srcs/list/ft_lstadd_front.c		\
		srcs/list/ft_lstclear.c			\
		srcs/list/ft_lstdelone.c		\
		srcs/list/ft_lstiter.c			\
		srcs/list/ft_lstlast.c			\
		srcs/list/ft_lstmap.c			\
		srcs/list/ft_lstnew.c			\
		srcs/list/ft_lstsize.c			\
		srcs/memory/ft_memset.c			\
		srcs/memory/ft_memcpy.c			\
		srcs/memory/ft_memmove.c		\
		srcs/memory/ft_memchr.c			\
		srcs/memory/ft_memcmp.c			\
		srcs/others/ft_atoi.c			\
		srcs/others/ft_bzero.c			\
		srcs/others/ft_calloc.c			\
		srcs/others/ft_itoa.c			\
		srcs/others/ft_split.c			\
		srcs/others/ft_tolower.c		\
		srcs/others/ft_toupper.c		\
		srcs/string/ft_strchr.c			\
		srcs/string/ft_strdup.c			\
		srcs/string/ft_striteri.c		\
		srcs/string/ft_strjoin.c		\
		srcs/string/ft_strlcat.c		\
		srcs/string/ft_strlcpy.c		\
		srcs/string/ft_strlen.c			\
		srcs/string/ft_strmapi.c		\
		srcs/string/ft_strncmp.c		\
		srcs/string/ft_strnstr.c		\
		srcs/string/ft_strrchr.c		\
		srcs/string/ft_strtrim.c		\
		srcs/string/ft_substr.c


BUILD_DIR = .build

CC = cc
CFLAGS = -Wall -Wextra -Werror -MMD
RF = -rf

OBJECTS = $(SRCS:%.c=$(BUILD_DIR)/%.o)
DEPENDANCIES = $(SRCS:%.c=$(BUILD_DIR)/%.d)


all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -crs $@ $^

-include $(DEPENDANCIES)

$(BUILD_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(RF) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS) 


.PHONY: all clean fclean re so
