# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/09/20 14:23:34 by mhouppin     #+#   ##    ##    #+#        #
#    Updated: 2019/09/20 14:23:34 by mhouppin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME := ../libstdio.a

SOURCES := \
	sources/xputchar.c 

OBJECTS := $(SOURCES:sources/%.c=objects/%.o)
DEPENDS := $(SOURCES:sources/%.c=objects/%.d)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $@ $^

objects/%.o: sources/%.c objects
	$(CC) -Wall -Wextra -Werror -Wpedantic -O3 -march=native -fno-builtin -fno-stack-protector -c -MMD -I include -o $@ $<

objects:
	mkdir -p $@

clean:
	rm -rf objects

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
