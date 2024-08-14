# 0x12. C - Singly linked lists

In this project, we learnt about singly linked lists and their applications in C <br>
Here are the tasks in the project: <br>

## Tasks

### 0. Print list

- To print all elements, traverse through each node (adding count) and print the data in each node
- [0-print_list.c](0-print_list.c): prints all elements of a list_t list

### 1. List length

- Traverse through each node counting each node
- [1-list_len.c](1-list_len.c): returns the number of elements in a list_t list

### 2. Add node

- Exchange new nodes with the head node
- [2-add_node.c](2-add_node.c): adds a new node at the beginning of a list_t list

### 3. Add node at the end

- Exchange the last node to point to new node and new node to point to null
- [3-add_node_end.c](3-add_node_end.c): adds a new node at the end of a list_t list

### 4. Free list

- Hold the pointer to next in a temp pointer and then free the current head till head is NULL
- [4-free_list.c](4-free_list.c): Frees a list_t list
