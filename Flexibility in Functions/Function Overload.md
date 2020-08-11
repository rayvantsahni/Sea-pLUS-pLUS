# Function Overload
What if you want a function to accept an argument that can be either an int OR a double? Or what if you want some function parameters to be optional?

This can be done by a process known as `function overloading`, you can give multiple C++ functions the same name. Just make sure at least one of these conditions is true:

* ### Each has different type parameters.
* ### Each has a different number of parameters.
* ### Overloading enables you to change the way a function behaves depending on what is passed in as an argument

Given the above functions, you could call the functions like so and C++ will know what to do:

  _fancy_number(12, 3);_
  
  _fancy_number(12, 3, 19);_
  
  _fancy_number(13.5, 3.8);_
