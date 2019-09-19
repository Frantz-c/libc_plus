# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/09/19 09:53:07 by mhouppin     #+#   ##    ##    #+#        #
#    Updated: 2019/09/19 10:23:36 by mhouppin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	:= ../libstring.a

SOURCES	:= $(wildcard sources/*.c)
OBJECTS	:= $(patsubst sources/%.c,objects/%.o,$(SOURCES))
DEPENDS	:= $(patsubst sources/%.c,objects/%.d,$(SOURCES))

AR		:= $(shell which ar)
GCC		:= $(shell which gcc)
MKDIR	:= $(shell which mkdir)
RM		:= $(shell which rm)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -rc $@ $<

objects/%.o: sources/%.c objects
	$(GCC) -Wall -Wextra -Werror -Wpedantic -O3 -march=native -c -MMD -I include -o $@ $<

objects:
	$(MKDIR) -p $@

clean:
	$(RM) -rf objects

fclean: clean
	$(RM) -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
