# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: mhouppin <mhouppin@le-101.fr>              +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/09/20 11:13:43 by mhouppin     #+#   ##    ##    #+#        #
#    Updated: 2019/09/20 11:13:43 by mhouppin    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

all clean fclean re:
	make $@ -C stdio
	make $@ -C string

.PHONY: all clean fclean re
