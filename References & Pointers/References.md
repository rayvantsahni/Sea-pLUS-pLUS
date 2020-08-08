# References
In C++, a **reference variable** is an `alias` for something else, that is, **another name for an already existing variable**.

So suppose we make **World** a reference to someone named **Earth**. You can refer to the person as either **Earth** or **World**.

Let’s take a look at how we can do this with code. Suppose we have an int variable already called Earth, we can create an alias to it by using the & sign in the declaration:

_int &world = earth;_

So here, we made `world` a reference to `earth`.
Now when we make changes to `world`, `earth` also changes.

Two things to note about references:

* ### Anything we do to the reference also happens to the original.
* ### Aliases cannot be changed to alias something else.
