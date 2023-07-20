C - Variadic functions Project
Throughout the course of this project, I learned significant insights on the use of variadic functions in C, notably the actual application of the va_start, va_arg, and va_end macros. I also investigated the relevance of the const type qualifier and its implementation in the C programming language. By investigating these ideas, I gained a better knowledge of how to effectively handle variable arguments and enforce immutability for improved program stability and dependability. As a result, this experience has widened my expertise in C programming and improved my toolset for dealing with a variety of problems in future projects.

Learning Objectives
At the end of this project, I am expected to be able to explain to anyone, without the help of Google:
What are variadic functions
How to use va_start, va_arg and va_end macros
Why and how to use the const type qualifier.

General Definitions
What are variadic functions
In C, a variadic function is a function that can accept a variable number of arguments. This allows you to create functions that can work with a different number of parameters each time they are called. Variadic functions are commonly used when the number of arguments is not known in advance or when dealing with functions that can perform operations on different types of data. The standard C library provides a macro and a set of functions that allow you to work with variadic arguments.

How to use va_start, va_arg and va_end macros
1. Include the header:
Before using the variadic macros, make sure to include the header in your C source file. This header provides the necessary functionality for working with variadic arguments.
Define the variadic function:
Create a function that takes a variable number of arguments by including an ellipsis ... in the function parameter list after the fixed parameters.

Initialize the va_list with va_start:
Inside the function, declare a va_list type variable, and initialize it using the va_start macro. The va_start macro takes two arguments: the va_list variable and the last fixed parameter of the function.

Access arguments with va_arg:
To access individual arguments within the function, use the va_arg macro. This macro takes two arguments: the va_list variable and the type of the argument. It returns the value of the next argument of the specified type.

Clean up with va_end:
After processing the variadic arguments, make sure to clean up the va_list using the va_end macro.

Why and how to use the const type qualifier
The const type qualifier in C is used to declare variables as read-only, meaning their values cannot be modified once they are initialized. It is a valuable feature that can enhance the safety, maintainability, and readability of your code.

main reasons why and how to use the const type qualifier:
1. Prevent accidental modification: By using const, you can protect variables from unintended changes in your code. This can help avoid bugs and make your code more robust.
Improve code readability: Marking variables as const makes it clear to other developers that the variable's value should not be changed. This improves the readability of your code and makes it easier to understand the intended usage of each variable.

Enable compiler optimizations: The const qualifier provides valuable information to the compiler about the immutability of variables. This can enable the compiler to perform optimizations and potentially improve the performance of your code.

Enhance program correctness: Using const can help catch programming errors during the compilation phase. If you attempt to modify a const variable, the compiler will generate an error, alerting you to the problem.

How to use const:
1. Constant variables: To declare a constant variable, use the const keyword before the data type during variable declaration. Once assigned a value, a constant variable cannot be modified later in the program.
Constant pointers: You can use const with pointers to indicate that the data pointed to by the pointer is constant, and therefore, it should not be modified using that pointer.

Constant pointer to a constant: You can also have a constant pointer to a constant, which means both the pointer and the data it points to cannot be modified.

Function parameters:You can use const to declare function parameters as read-only, indicating that the function will not modify their values.

Function return values: You can use const to declare functions that return constant values. This means that the returned value should not be modified.

Tasks
0. Beauty is variable, ugliness is constant - function that returns the sum of all its paramters.
If the parameter n == 0, the function returns 0.
To be is to be the value of a variable - C function that prints numbers, followed by a new line.
The paramter separator is the string to be printed between numbers.
The paramter n is the number of integers passed to the function.
If separator is NULL, it is not printed.

One woman's constant is another woman's variable - C function that prints strings, followed by a new line.
The parameter separator is the string to be printed between the strings.
The parameter n is the number of strings passed to the function.
If separator is NULL, it is not printed.
If one of the strings is NULL, the function prints (nil) instead.

To be is a to be the value of a variable - C function that prints anything.
