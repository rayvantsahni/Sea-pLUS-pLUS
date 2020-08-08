# Pass-By-Reference with Const
The `const` keywords tells the compiler that we won’t change something.

For example, in the following code, we are telling the compiler that the double variable pi will stay at 3.14 through out the program:

_double const pi = 3.14;_

Sometimes, we use const in a function parameter; this is when we know for a fact that we want to write a function where the parameter won’t change inside the function.

So to save the computational cost for a function that doesn’t modify the parameter value(s), we can actually go a step further and use a const reference.

This will ensure the same thing: the parameter won’t be changed. However, by making `i` a reference to the argument, this saves the computational cost of making a copy of the argument.
