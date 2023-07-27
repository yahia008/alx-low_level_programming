C - Singly linked lists Project

Learning Objectives
At the end of this project, I am expected to be able to explain to anyone, without the help of Google:
When and why using linked lists vs arrays
How to build and use linked lists
General Definitions
When and why using linked lists vs arrays
Linked lists and arrays are fundamental data structures used to organize and store data in computer programs. The choice between them depends on the specific requirements of the application. Linked lists excel in dynamic scenarios, where the size of the data may change frequently. They use pointers to connect elements, allowing easy insertion and deletion operations without shifting elements. This makes linked lists efficient for data that undergoes constant modification.
On the other hand, arrays are preferred when the data size remains fixed, or random access to elements is crucial. They use contiguous memory, eg a new array and copying elements, which can be costly.

How to build and use linked lists
1. Define the Node Structure:
Create a structure that represents a single node in the linked list. Each node should contain the data and a pointer to the next node.Create Functions:
Implement functions to perform various operations on the linked list, such as creating a new node, inserting elements, deleting elements, and traversing the list.

Create the Main Function:
In the main function, you can create a linked list, insert elements, delete elements, and perform other operations.

Compile and Run:
After writing the code, compile and run it to see the linked list operations in action.

Tasks
0. Print list - C function that prints all the elements of a list_t list.
If str is NULL, the function prints [0] (nil).
List length - C function that returns the number of elements in a linked list_t list.

Add node - C function that adds a new node at the beginning a of a list_t list.
If the function fails - returns NULL.
Otherwise - returns the address of the new element.

Add node at the end - C function that adds a new node at the end of a linked list_t list.
If the function fails - returns NULL.
Otherwise - returns the address of the new element.

Free list - C function that frees a list_t list.

The Hare and the Tortoise - C function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

Real programmers can write assembly code in any language - 64-but assembly program that prints Hello, Holberton followed by a new line using only the printf function witout interrupts.
