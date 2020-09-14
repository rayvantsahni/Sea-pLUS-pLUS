### Introduction
A computer’s memory is a sequence of bytes. We can number the bytes from 0 to the last one. Each number, known as an `address`, represents a location in the memory.
Everything we put into memory has an address.

For example, when we declare and initialize an `int` variable named `score`:

_int score = 200;_

This will set aside an **int-size** piece of memory for the variable **score** somewhere and put the value `200` into that memory.

This is where come in-
* References
* Pointers

These are some of the most powerful features in C++; they allow programmers to **directly manipulate memory** – the most critical and scarce resource in computer – in order to optimize performance.


### References
* Pass-by-reference
* Pass-by-reference with `const`

### Pointers
* Dereferencing a pointer
* nullptr

_int &reference = original; //Reference_

_int* pointer = &original; //Pointer_
