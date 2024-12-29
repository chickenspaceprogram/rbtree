# rbtree

A red-black tree, implemented in C.

If you want to use this as a C version of `std::map`, just make the comparison function only compare the key portion of a struct containing a key and a value and put the key-value struct in the `rbTree`. 

The CMake build system for this is hella cursed, but it does work. 