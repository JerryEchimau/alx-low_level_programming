# 0x13. C - More singly linked lists

In this project, we continued learning about singly linked lists <br>
Here are the tasks in this project <br>

## Tasks

### 0. Print list

- Iterate through the list printing each node and setting the pointer on the next node
- [0-print_listint.c](0-print_listint.c): prints all elements of a listint_t list

### 1. List length

- Traverse through the node counting each node and stopping when pointer points to NULL
- [1-listint_len.c](1-listint_len.c): returns the number of elements in a linked list

### 2. Add node

- Create a new node, point it to where the head points (add it to the first place on the list), then point the head pointer to the new node (making it the first node)
- [2-add_nodeint.c](2-add_nodeint.c): adds a new node at the beginning of a listint_t list

### 3. Add node at the end

- Create the list, give it values, and set it's next pointer to be NULL
- Then traverse through the list until the next pointer points to a NULL (indicationg the last pointer on the list) and point that pointer to the new pointer created, effectively making it the last
- [3-add_nodeint_end.c](3-add_nodeint_end.c): adds a new nde at the end of a listint_t list

### 4. Free list

- Traverse through the list freeing each node
- [4-free_listint.c](4-free_listint.c): frees a listint_t list

### 5. Free

- Same as task 4, but set the head to NULL after freeing all nodes
- [5-free_listint2.c](5-free_listint2.c): frees a listint_t list and sets the head to NULL

### 6. Pop

- Remove the first node of the list and return its value.
- Hold the data (and return its value later), point a temp pointer to the head, move the head, and free temp.
- [6-pop_listint.c](6-pop_listint.c): deletes the head node of a listint_t linked list and returns the head node's data

### 7. Get node at index

- Traverse the list to the specified index and return that node
- [7-get_nodeint.c](7-get_nodeint.c): returns the nth node of a listint_t linked list

### 8. Sum list

- Traverse the list, adding up all the integer values stored in each node
- [8-sum_listint.c](8-sum_listint.c): returns the sum of all the data (n) of a listint_t linked list

### 9. Insert

- Insert a new node at a given position in the list
- [9-insert_nodeint.c](9-insert_nodeint.c): inserts a new node at a given position in a listint_t list

### 10. Delete at index

- Remove a node at a specified index in the list
- [10-delete_nodeint.c](10-delete_nodeint.c): deletes the node at a given index of a listint_t linked list

# Author

Jerry Echimau <br>
[![Email Me](https://img.shields.io/badge/Email-Me-brightgreen)](mailto:jerryjohne77@gmail.com) <br>

Socialize: <br>
[![Twitter](https://img.shields.io/twitter/url?label=Follow&style=social&url=https%3A%2F%2Ftwitter.com%2Fjerry_e_john)](https://twitter.com/jerry_e_john) <br>
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Connect-blue?style=social&logo=linkedin)](https://www.linkedin.com/in/echimau) <br>
[![GitHub](https://img.shields.io/badge/GitHub-Profile-blue?style=social&logo=github)](https://github.com/JerryEchimau) <br>