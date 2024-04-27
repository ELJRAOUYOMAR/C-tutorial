# Linked list

## definition:
A linked list is a data structure consisting of a sequence of elements where each element points to the next element in the sequence. Unlike arrays, linked lists do not have a fixed size and can grow or shrink dynamically.
There are three types of linked lists:
- `single linked list`: Navigation in forward only
- `doubly linked list`: forward and backward navigation is possible
- `circular linked list`: last element is linked to the first element

In C, we typically implement a linked list using structures. Each element of the linked list is represented by a structure called a node. Each node contains two parts:
- Data: The actual data being stored.
- link/Pointer: A reference to the next node in the sequence.
![Node](node.png)
### Single linked list representation
![single linked list](singly_linked_list.png)
### Question: how can we point to the first Node
 =>response: by the head  
the first element named `head`
last element named `tail`
![Head](head.png)





