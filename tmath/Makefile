# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/09/23 14:24:53 by mhouppin     #+#   ##    ##    #+#        #
#    Updated: 2019/09/23 14:30:22 by mhouppin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME := ../libtmath.a

SOURCES := \
	sources/vector_add.c \
	sources/vector_div.c \
	sources/vector_init.c \
	sources/vector_mul.c \
	sources/vector_normalize.c \
	sources/vector_scalar_prod.c \
	sources/vector_sub.c 

OBJECTS := $(SOURCES:sources/%.c=objects/%.o)
DEPENDS := $(SOURCES:sources/%.c=objects/%.d)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $@ $^

objects/%.o: sources/%.c
	@if test ! -d objects; then mkdir -p objects; fi
	$(CC) -Wall -Wextra -Werror -Wpedantic -O3 -march=native -fno-builtin -fomit-frame-pointer -fno-stack-protector -c -MMD -I include -o $@ $<

clean:
	rm -rf objects

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
