#############################################################################################################
#                                                                                                           #
#                                               VARIABLES   												#
#																											#
#############################################################################################################

NAME = libft.a
LIB = libft.h
CFM = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
		ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 
 
CFB =  ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstsize_bonus.c \
		 ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBFM = $(CFM:.c=.o)
OBFB = $(CFB:.c=.o)
FLAGS = -Wall -Wextra -Werror -g

#############################################################################################################
#                                                                                                           #
#                                         		  RULES 													#
#																											#
#############################################################################################################

all : $(NAME)
$(NAME) : $(OBFM) $(LIB)
	ar rcs $@ $(OBFM) 
	echo "libft.a created successfully !!"
%.o : %.c
	cc $(FLAGS) -c $< -o $@
bonus : $(OBFB)
	ar rcs $(NAME) $(OBFB)
	echo "libft.a with the bonus part created successfully !!"
clean :
	rm $(OBFB) $(OBFM) 
fclean : clean
	rm $(NAME)
re : fclean all bonus

.PHONY : clean fclean all bonus re
