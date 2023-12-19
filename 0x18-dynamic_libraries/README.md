# 0x18. C - Dynamic libraries

In this project, I learnt about dynamic libraries in C and how to create and use them using ``-fPIC`` and ``-c`` arguments to ``gcc``  to create object (``.o``) files and then use ``-shared`` argument to ``gcc`` to create a dynamic library
Here are the tasks done in this project:

## Tasks
### 0. A library is not a luxury but one of the necessities of life
- created a dynamic library using ``-shared`` argument to ``gcc`` of all object files
- learnt how to use ``ldd`` to list dynamic dependencies of an executable file that relies on the dynamic library
- Learnt how to include the current directory in the ``LD_LIBRARY_PATH`` environment which lists the list of directories that the system looks for shared libraries
- [libdynamic.so](https://github.com/JerryEchimau/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libdynamic.so): dynamic library

### 1. Without libraries what have we? We have no past and no future
- Here, I created a shell script that compiles all .c file in the current directory without linking then link the object files into a dynamic library
- [1-create_dynamic_lib.sh](https://github.com/JerryEchimau/alx-low_level_programming/blob/master/0x18-dynamic_libraries/1-create_dynamic_lib.sh): a bash script that creates a dynamic library from all .c files

### 2. Let's call C functions from Python
- 
