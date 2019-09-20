# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/09/20 11:47:57 by mhouppin     #+#   ##    ##    #+#        #
#    Updated: 2019/09/20 11:47:57 by mhouppin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME := ../libstring.a

SOURCES := \
	sources/xbzero.c \
	sources/xmemchr.c \
	sources/xmemcmp.c \
	sources/xmemcpy.c \
	sources/xmemmove.c \
	sources/xmemrcpy.c \
	sources/xmemset.c \
	sources/xstrcat.c \
	sources/xstrchr.c \
	sources/xstrcmp.c \
	sources/xstrcpy.c \
	sources/xstrcspn.c \
	sources/xstrlen.c \
	sources/xstrncat.c \
	sources/xstrncmp.c 

OBJECTS := $(SOURCES:sources/%.c=objects/%.o)
DEPENDS := $(SOURCES:sources/%.c=objects/%.d)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $@ $^

objects/%.o: sources/%.c objects
	$(CC) -Wall -Wextra -Werror -Wpedantic -O3 -march=native -fno-builtin -c -MMD -I include -o $@ $<

objects:
	mkdir -p $@

clean:
	rm -rf objects

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
