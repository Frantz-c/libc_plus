# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/09/23 14:24:53 by mhouppin     #+#   ##    ##    #+#        #
#    Updated: 2019/09/23 14:24:53 by mhouppin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME := ../libstdio.a

SOURCES := \
	sources/xfputchar.c \
	sources/xfputs.c \
	sources/xfputstr.c \
	sources/xputchar.c \
	sources/xputs.c \
	sources/xputstr.c 

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
