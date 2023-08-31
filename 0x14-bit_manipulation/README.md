0x14. C - Bit manipulation:
---------------------------
0. For task 0 you were supposed to create a function that converts a binary number to an unsigned int: Arguments
-Prototype: unsigned int binary_to_uint(const char *b);
-where b is pointing to a string of 0 and 1 chars
-Return: the converted number, or 0 if there is one or more chars in the string b that is not 0 or 1 b is NULL

1. I had to Write a function that prints the binary representation of a number.
Prototype: void print_binary(unsigned long int n);
You are not allowed to use arrays
You are not allowed to use malloc

2. You can see a function that returns the value of a bit at a given index.
--index is the index, starting from 0
--Returns: the value of the bit at index index or -1

3. I had to write function that sets the value of a bit to 1 at a given index.
--index is the index, starting from 0
--Returns: 1 if it worked, or -1 if an error occurred

4. Created a function that sets the value of a bit to 0 at a given index.
--index is the index, starting from 0 of the bit you want to set
--Returns: 1 if it worked, or -1 if an error

5. Function that returns the number of bits you would need to flip to get from one number to another.
--You are not allowed to use the % or / operators

6. This function checks the endianness.
--Returns: 0 if big endian, 1 if little endian

7. Program will find password
--Your file should contain the exact password, no new line, no extra space
--The resultt julien@ubuntu:~/0x14. Binary$ ./crackme3 `cat 101-password` Congratulations!
