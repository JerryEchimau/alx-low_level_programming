# 0x0E. C - Structures, typedef

- In this project, we learnt about structures, how to declare them, initialize them, and use them
- We also learnt how to create aliases for structures using ``typedef``

Here are the tasks in this project:

## Tasks :clipboard:

### 0. Poppy

- In this task, declare a structure called dog and input its members
- Remember that each member is separated with a ; and the whole structure as well

### 1. A dog is the only thing on earth that loves you more than you love yourself

- For this task, simply initialize the elements with ->

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

- Here, we print by dereferencing the pointer with -> to access the element
- We can also use a ternary operator (``condition ? value_if_true : value_if_false``) right afrer dereferencing to check for certain conditions (like NULL in this case)

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

- Here, we use ``typedef`` to define the current data type (``struct dog``) to a data type called ``dog_t``

### 4. A door is what a dog is perpetually on the wrong side of

- To create a new dog, allocate memory for the whole struct using malloc then initialize each member with the pointer to the copied string (this is not done for the age since its not a pointer)

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

- to free the struct, first, free the pointers to the chars then free the whole struct


Author: Jerry Echimau