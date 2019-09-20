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

NAME := ../libstring.a

SOURCES := \
	sources/strtok.c \
	sources/strtok_r.c \
	sources/xbzero.c \
	sources/xmemccpy.c \
	sources/xmemchr.c \
	sources/xmemcmp.c \
	sources/xmemcpy.c \
	sources/xmemmem.c \
	sources/xmemmove.c \
	sources/xmemrcpy.c \
	sources/xmemset.c \
	sources/xstpcpy.c \
	sources/xstpncpy.c \
	sources/xstrcat.c \
	sources/xstrchr.c \
	sources/xstrcmp.c \
	sources/xstrcpy.c \
	sources/xstrcspn.c \
	sources/xstrdup.c \
	sources/xstrlen.c \
	sources/xstrncat.c \
	sources/xstrncmp.c \
	sources/xstrncpy.c \
	sources/xstrndup.c \
	sources/xstrnlen.c \
	sources/xstrnstr.c \
	sources/xstrpbrk.c \
	sources/xstrrchr.c \
	sources/xstrspn.c \
	sources/xstrstr.c 

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
