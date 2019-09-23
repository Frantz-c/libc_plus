# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/09/23 12:58:39 by mhouppin     #+#   ##    ##    #+#        #
#    Updated: 2019/09/23 12:58:39 by mhouppin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME := ../libvector.a

SOURCES := \
	sources/vbsf.c \
	sources/vinit.c \
	sources/vitem.c \
	sources/vmemory.c \
	sources/vset.c 

OBJECTS := $(SOURCES:sources/%.c=objects/%.o)
DEPENDS := $(SOURCES:sources/%.c=objects/%.d)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $@ $^

objects/%.o: sources/%.c
	@if test ! -d objects; then mkdir -p objects; fi
	$(CC) -Wall -Wextra -Werror -Wpedantic -O3 -march=native -fno-builtin -fno-stack-protector -c -MMD -I include -o $@ $<

clean:
	rm -rf objects

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
