# 0x0B. C - malloc, free

- In this project, we learnt about dynamic memory allocation and allocating memory at runtime
- Here are the tasks in this project:

## Tasks

### 0. Float like a butterfly, sting like a bee

- First, allocate mmory to a pointer through malloc
- Then iterate through each memory location and copy char c

### 1. The woman who has no imagination has no wings

- Here, we first get the length of str and the allocate memory to a duplicate variable using the length of str
- We then copy the contents of str to dup

### 2. He who is not courageous enough to take risks will accomplish nothing in life

- First, find the length of each string then allocate memory using len1 + len2 + 1(for a NULL terminator)
- Then concatenate the two strings and include the null terminator

### 3. If you even dream of beating me you'd better wake up and apologize

- Here, we first allocate memory to an integer pointer (with height size) and then iterate through it and allocate memory to an integer (with width size).
- we then iterate through the second allocated memory and initiate every component with 0

### 4. It's not bragging if you can back it up

- Here, we free both the inner memory ``grid[i]` and the outer memory ``grid``

Author: Jerry Echimau