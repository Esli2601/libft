*This project has been created as part of the 42 curriculum by eambinin.*

# Libft

# Description

Libft is a foundational project in the 42 curriculum.
Its goal is to build a personal C standard library by reimplementing commonly used functions from the C standard library, along with additional utility tools that will be reused in future projects.

By completing this project, students gain a deeper understanding of:

     How standard C library functions work internally
     Memory management in C
     String and character manipulation
     Linked list handling
     Writing clean, reusable, and well-documented code

This library becomes a core toolset for many subsequent 42 projects.
Instructions

# Instructions

# Cloning the repository

Clone the project from its Git repository:

    git clone git@vogsphere.42antananarivo.mg:vogsphere/intra-uuid-c9e0a8a0-8f24-4c39-8187-9044127f632b-7213230-eambinin


Enter the project directory:

    cd libft


All source files, the header file, and the Makefile are located at the root of the repository, as required by the subject.

#  Compilation

To compile the library, simply run:

    make

Create a static library named:

    libft.a

#  Available Makefile Rules
Command	Description

    make	     :   Compiles the library
    make clean	 :   Removes object files
    make fclean	 :   Removes object files and libft.a
    make re	     :   Recompiles the library from scratch

#  Usage

To use libft in your own project, include the header file:

    #include "libft.h"


Compile your program while linking the library:

    cc <program.c> -Wall -Wextra -Werror -L. -lft


 Make sure libft.a and libft.h are accessible to your project.


#  Library Content


The libft library is divided into several functional categories.

 Part 1 — Standard C Library Reimplementations

Reproductions of functions from <ctype.h>, <string.h>, and <stdlib.h>:

Character checks

    ft_isalpha : Checks if a character is an alphabetical letter (A–Z or a–z).
    ft_isdigit : Checks if a character is a digit (0–9).
    ft_isalnum : Checks if a character is alphanumeric (letter or digit).
    ft_isascii : Checks if a character belongs to the ASCII table (0–127).
    ft_isprint : Checks if a character is printable (including space).

Character conversion

    ft_toupper : Converts a lowercase letter to uppercase.
    ft_tolower : Converts an uppercase letter to lowercase.

String handling

    ft_strlen  : Returns the length of a string (excluding \0).
    ft_strchr  : Finds the first occurrence of a character in a string.
    ft_strrchr : Finds the last occurrence of a character in a string.
    ft_strncmp : Compares two strings up to n characters.
    ft_strnstr : Locates a substring within a string, limited to n characters.
    ft_strdup  : Allocates and returns a duplicate of a string.
    ft_strlcat : Appends a string to a buffer, ensuring no overflow and null-termination.
    ft_strlcpy : Copies a string into a buffer, ensuring no overflow and null-termination.


Memory handling

    ft_memset  : Fills a block of memory with a specific value.
    ft_bzero   : Sets a block of memory to zero.
    ft_memcpy  : Copies memory from one location to another (non-overlapping).
    ft_memmove : Copies memory safely even if areas overlap.
    ft_memchr  : Searches for a byte in a block of memory.
    ft_memcmp  : Compares two blocks of memory.

Conversion & allocation

    ft_atoi   : Converts a string to an integer.
    ft_calloc : Allocates memory and initializes it to zero.

 Part 2 — Additional Utility Functions

Functions not present in the standard C library but commonly needed.

String manipulation

    ft_substr  : Extracts a substring from a string.
    ft_strjoin : Concatenates two strings into a new allocated string.
    ft_strtrim : Trims characters from the beginning and end of a string.
    ft_split   : Splits a string into an array of strings using a delimiter.

Integer conversion

    ft_itoa    : Converts an integer to a string. 

String mapping & iteration

    ft_strmapi  : Applies a function to each character of a string and returns a new string.
    ft_striteri : Applies a function to each character of a string (in-place).

File descriptor output

    ft_putchar_fd : Writes a character to a file descriptor.
    ft_putstr_fd  : Writes a string to a file descriptor.
    ft_putendl_fd : Writes a string followed by a newline.
    ft_putnbr_fd  : Writes an integer to a file descriptor.

 Part 3: Linked List Functions

Libft also includes linked list utilities using the following structure:

    typedef struct s_list
    {
        void            *content;
        struct s_list   *next;
    }   t_list;

Implemented functions

    ft_lstnew        : Creates a new list node.    
    ft_lstadd_front  : Adds a node at the beginning of a list.
    ft_lstadd_back   : Adds a node at the end of a list.
    ft_lstsize       : Count the number of elements in a list.
    ft_lstlast       : Get the last element of a list.
    ft_lstdelone     : Delete a single list element.
    ft_lstclear      : Delete and free an entire list.
    ft_lstiter       : Apply a function to each list element.
    ft_lstmap        : Create a new list by applying a function to each element.

These functions provide essential tools for creating, modifying, and destroying singly linked lists.

#  Technical Choices

All functions are written in C, following the 42 Norm

Dynamic memory is carefully managed to prevent leaks

Functions are designed to be modular, reusable, and independent

 No forbidden functions are used

#  Resources
Documentation & References

    Linux man pages (man 3 <function_name>)
    Geeksforgeeks.org
    42 subject PDF & evaluation guidelines
    w3school.com
    KooR.fr


#  Use of AI

AI tools were used strictly as a learning aid, mainly for:

    Clarifying expected behavior of standard C library functions
    Verifying edge cases and specifications
    Improving documentation clarity and README structure

 All code was written, tested, and debugged manually by the author, in full compliance with 42 academic integrity rules.
