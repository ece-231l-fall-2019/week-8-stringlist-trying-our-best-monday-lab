# ECE 231 Week 8 Lab Assignment

This assignment will, again, be similiar to the previous group assignments. For this assignment
we will be implementing a class similar to std::list which is a **double** linked list.  I implemented
a version of the single linked list in class and I am providing you that implementation as a starting
point for this assignment.

## Part 1: Implement unit tests for StringList

Before writing your class, implement some unit tests. You can test them against the built in
`std::list<std::string>` class. Feel free to use `dbg.h`.

In particular, I want you to test adding and removing items to the front AND the back of the list.
If you add several items to the back of the list, can you access them while removing from
the front of the list? And vice-versa.

**Run your tests with `valgrind` to ensure that you are using allocated memory correctly.**

## Part 2: Implement StringList

The following methods must be implemented.  Check [cppreference.com](https://en.cppreference.com/w/cpp/container/list)
for details on what the methods are supposed to do.

```
operator=

empty
size
clear

front
back

push_back
push_front
pop_back
pop_front

reverse
unique
```
