## BUILD PRINTF

Here are the requirements:
-   Don't implement the buffer management of the original printf().
-   Your function has to handle the following conversions: cspdiuxX%
-   Your function will be compared against the original printf().
-   You must use the command ar to create your library.
-   Using the libtool command is forbidden.
-   Your libftprintf.a has to be created at the root of your repository
---
You have to implement the following conversions:
- %c Prints a single character.
- %s Prints a string (as defined by the common C convention).
- %p The void * pointer argument has to be printed in hexadecimal format.
- %s a decimal (base 10) number.
- %i an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x a number in hexadecimal (base 16) lowercase format.
- %X a number in hexadecimal (base 16) uppercase format.
- %% a percent sign.
