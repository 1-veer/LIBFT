# LIBFT

Welcome to Libft, a custom C library created as part of the 42 curriculum! This project is all about re-implementing standard C library functions to deepen our understanding of C programming, memory management, and data manipulation. The library serves as a foundation for many future projects and challenges at 42.

Libft is a custom library written in C that re-implements essential C standard library functions, including operations on strings, memory, and file descriptors. It also introduces custom utility functions and a linked list manipulation module, providing a robust toolkit for use in future projects.
Features

    Recreation of many functions from libc.
    Custom utility functions for string manipulation and memory management.
    Linked list manipulation functions for more complex data handling.
    Clean and modular code adhering to the 42 Norm.

Functions Implemented
Libc Functions

These functions are recreated versions of C standard library functions with the ft_ prefix, such as strlen becoming ft_strlen:

    Character Checks and Transformations: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint, ft_toupper, ft_tolower
    String Operations: ft_strlen, ft_strchr, ft_strrchr, ft_strlcpy, ft_strlcat, ft_strncmp, ft_strnstr
    Memory Manipulation: ft_memset, ft_bzero, ft_memcpy, ft_memmove, ft_memchr, ft_memcmp
    Conversions: ft_atoi
    Dynamic Memory Allocation: ft_calloc, ft_strdup

Additional Functions

These functions enhance standard functionality for string and file descriptor handling:

    String Manipulation: ft_substr, ft_strjoin, ft_strtrim, ft_split, ft_itoa, ft_strmapi, ft_striteri
    File Descriptor Output: ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

Bonus Functions

Upon completion of the mandatory part, additional functions for linked list manipulation are implemented using a t_list struct:

    Linked List Functions: ft_lstnew, ft_lstadd_front, ft_lstsize, ft_lstlast, ft_lstadd_back, ft_lstdelone, ft_lstclear, ft_lstiter, ft_lstmap


