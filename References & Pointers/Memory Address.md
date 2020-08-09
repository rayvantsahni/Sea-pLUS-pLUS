# Memory Address
So references (aliases), are created by using the `&` symbol in a variable declaration. But the `&` sign can have another meaning.

The **“address of”** operator, `&`, is used to get the **memory address, the location in the memory, of an object**.

Suppose we declare a variable called:

_int porcupine_count = 3;_

 We can find out where the variable porcupine_count is stored on the computer by printing out &porcupine_count:
 
 _std::cout << &porcupine_count << "\n";_
 
 It will return something like:

`0x7ffd7caa5b54`

This is a memory address represented in **hexadecimal**. A memory address is usually denoted in hexadecimal instead of binary for readability and conciseness.

The double meaning of the `&` symbol can be tricky at first, so make sure to note:

* ### When & is used in a declaration, it is a reference operator.
* ### When & is not used in a declaration, it is an address operator.
