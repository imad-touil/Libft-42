# Libft-42
The libft project is a foundational project in the 42 curriculum, specifically designed to help students build their own library of C functions from scratch. It's an excellent way to practice implementing basic functions and understanding how libraries work in C. Here’s a breakdown of what libft involves and some tips for tackling it:

1. Purpose of the libft Project
The goal of libft is to re-implement commonly used standard C library functions and create your own utility functions. By doing this, you’ll gain a deeper understanding of how C libraries work and the mechanics of C functions.
This project lays the groundwork for future 42 projects by providing a custom library (libft.a) that you can use in your upcoming assignments.
2. Main Sections of the libft Project
Part 1: Basic standard library functions.

You’ll start by re-implementing standard functions from <string.h>, <ctype.h>, etc. These often include functions like ft_strlen, ft_strcpy, ft_memset, ft_bzero, and ft_toupper.
These functions focus on handling strings, memory, and character checks.
Part 2: Additional utility functions.

This part extends the library with functions that are a bit more complex but still essential for handling strings and memory, such as ft_substr, ft_strjoin, and ft_split.
Functions in Part 2 often manipulate strings and memory in more complex ways, requiring careful memory management to avoid leaks.
Bonus Part: Linked list functions.

If you complete Part 1 and Part 2, you can implement linked list functions in the bonus part. Examples include ft_lstnew, ft_lstadd_front, ft_lstsize, etc.
This part introduces you to data structures, specifically linked lists, and is excellent practice for more advanced data management in C.
3. Requirements
Coding Style: Follow the 42 Norm strictly (e.g., limited line lengths, restricted use of certain statements). The norm is enforced in libft and all future projects.
File Organization: Each function should be in its own .c file, and all header declarations should be in a libft.h file.
Makefile: You need to create a Makefile to compile your library. This should include standard rules (all, clean, fclean, re) and produce libft.a, a static library file that can be linked to other programs.
4. Testing and Debugging
Create test cases: Write test programs to check if each function works as expected. You can use printf statements for simple debugging or tools like Valgrind to check for memory leaks.
Use libft testers: Several open-source testers for libft are available on GitHub. These can help ensure your functions handle edge cases and follow the expected behavior.
5. Tips for Success
Understand each function fully: Don’t rush through the implementations. Make sure you understand the behavior and edge cases for each function.
Manage memory carefully: Functions that involve dynamic memory allocation (malloc) must handle memory correctly, freeing any allocated memory where necessary.
Stay organized: Structure your code and files in a clear, consistent way. This will make debugging easier and help you follow the 42 norm.
Seek peer reviews: Peer review is encouraged in the 42 network, so ask your fellow students to review your code. This can help you catch mistakes and learn from others’ perspectives.
Once you complete the project, libft.a becomes a helpful tool for your future 42 projects, as it contains functions that you implemented yourself and fully understand.



Always Ask ChatGpt huh
