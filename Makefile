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

all clean fclean re:
	make $@ -C stdio
	make $@ -C string
	make $@ -C tmath

.PHONY: all clean fclean re
