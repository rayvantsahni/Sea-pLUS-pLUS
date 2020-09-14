When we declare a pointer variable like so, its content is not intialized:

_int* ptr;_

In other words, it contains an address of “somewhere”, which is of course not a valid location. This is dangerous! We need to initialize a pointer by assigning it a valid address.

But suppose we don’t know where we are pointing to, we can use a null pointer.
`nullptr` is a new keyword introduced in C++11. It provides a typesafe pointer value representing an **empty pointer**.

We can use `nullptr` like so:

_int* ptr = nullptr;_

#### Note: 
In older C/C++ code, `NULL` was used for this purpose. `nullptr` is meant as a modern replacement to `NULL`.
