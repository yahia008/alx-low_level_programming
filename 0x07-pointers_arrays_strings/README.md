C - Even more pointers, arrays and strings Project
Through this project, I gained knowledge of pointers to pointers, multidimensional arrays, and the most used string manipulation C standard library methods.

Learning Objectives
What are pointers to pointers and how to use them
In C, a pointer is a variable that stores the memory address of another variable. Similarly, a pointer to a pointer (double pointer) is a variable that stores the memory address of a pointer variable.

What are multidimensional arrays and how to use them
A multi-dimensional array in C is a collection of elements arranged in a tabular form with two or more dimensions. Each element in the array is accessed using multiple indices corresponding to the various dimensions.

What are the most common C standard library functions to manipulate strings
The C standard library provides several functions to manipulate strings efficiently. Here are some of the most common C standard library functions used for string manipulation:

strlen(): Calculates the length of a string by counting the number of characters until the null terminator ('\0') is encountered.

strcpy(): Copies the contents of one string to another, including the null terminator.

strcat(): Concatenates (appends) one string to the end of another, resulting in a combined string.

strcmp(): Compares two strings lexicographically and returns an integer indicating their relationship (e.g., if they are equal, if one is greater than the other, or if they differ).

strncmp(): Compares a specified number of characters from two strings and returns an integer indicating their relationship.

strncpy(): Copies a specified number of characters from one string to another, allowing for partial string copying.

strchr(): Searches for the first occurrence of a character in a string and returns a pointer to its location.

strstr(): Searches for the first occurrence of a substring within a string and returns a pointer to its location.

sprintf() or snprintf(): Writes formatted data to a string, similar to printf(), allowing you to create formatted strings.

strtok(): Breaks a string into tokens (substrings) based on a specified delimiter.

These functions, along with others provided by the C standard library, enable developers to perform various operations on strings, such as finding lengths, copying, concatenating, comparing, searching, and manipulating string data.

It's important to note that when using these functions, proper memory allocation and buffer handling should be taken into account to avoid potential buffer overflows or other vulnerabilities.

Tasks
0. memset - C function that fills the first n bytes of memory area pointed to by s with the constant byte b.

1. memcpy - C function that copies n bytes from memory area src to memory area dest.

2. strchr - C function that returns a pointer to the first occurence of the character c in the string s.

3. strspn - C function that returns the number of bytes in the intitial segment of memory area s which consist only of bytes from a substring accept.

4. strpbrk - C function that locates the first occurence in a string s of any of the bytes in a string accept.

5. strstr - C function that finds the first occurence of a substring needle in a string haystack.

6. Chess is mental torture - C function that prints the chessboard.

7. The line of life is a ragged diagonal between duty and desire - C function that prints the sum of the two diagonals of a square matrix of integers.

8. Double pointer, double fun - C function that sets the value of a pointer to a char.

9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure - File containing the password for the crackme2 executable.
