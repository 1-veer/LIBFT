CC = cc
Cflags = -Wallo -Wextra -Werror
Name = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
       ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
       ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
       ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
       ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
       ft_split.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strmapi.c ft_strncmp.c \
       ft_strtrim.c ft_substr.c \
       ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
       ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
       ft_lstnew_bonus.c ft_lstsize_bonus.c




# Object files
OBJS = $(SRCS:.c=.o)

# Rule to create the library
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
# we can add : @echo "Library $(NAME) created."

# Rule to compile each .c file into an .o file
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	@rm -f $(OBJS)
# we can add: @echo "Object files removed."

# Clean up object files and the library
fclean: clean
	@rm -f $(NAME)
# we can add : @echo "Library $(NAME) removed."

# Recompile everything from scratch
re: fclean $(NAME)

# Default rule
all: $(NAME)       #all is the default rule, which simply depends on $(NAME). When you run make without specifying a target, this rule builds libft.a.


# target: dependencies
#     command

# target is the file or action you want to create or execute.
# dependencies are files that need to be up-to-date before target can be built.
# command is the shell command to run if the target is out-of-date.