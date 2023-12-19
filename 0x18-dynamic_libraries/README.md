# 0x18. C - Dynamic libraries

In this project, I learnt about dynamic libraries in C and how to create and use them using ``-fPIC`` and ``-c`` arguments to ``gcc``  to create object (``.o``) files and then use ``-shared`` argument to ``gcc`` to create a dynamic library
Here are the tasks done in this project:

## Tasks
### 0. A library is not a luxury but one of the necessities of life
- created a dynamic library using ``-shared`` argument to ``gcc`` of all object files
- learnt how to use ``ldd`` to list dynamic dependencies of an executable file that relies on the dynamic library
- Learnt how to include the current directory in the ``LD_LIBRARY_PATH`` environment which lists the list of directories that the system looks for shared libraries
- [libdynamic.so](
