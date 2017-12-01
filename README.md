## LinkedList

A non linear data structure. Unlike arrays, these are not stored in contiguous locations. Elements of a linked list are linked via pointers. You will need a pointer to the head of the list (the first node). If the list is empty, then the head is NULL. Each node has at least two parts to it, the data and the pointer to the next node. The last element is called the tail and will always point to NULL.

## Arrays vs. LinkedList

Arrays are a fixed size where as LinkedList have a dynamic size. For arrays, inserting and deleting elements are expensive calls. Random access of Linked Lists are not allowed, you need to traverse the list starting from the head node. Extra memory space is needed in Linked List to store the pointer.

## Traversal

Traverse from the head until the next element is null. This can be done very easily with a **while** loop.

## Inserting a node

There are three cases for inserting a node into a Linked List. The first case is inserting at the front of the Linked List. This will be added before the head. The new node will then become the new head. The function I've created to do this is called **push()**. The time complexity of this operation is O(1). The second case is inserting after a given node. You are given a pointer to a node and you will need to traverse the list and insert after the given node. This operation is O(1) time complexity. The function I've created to handle this is **insertAfter()**. The final case is when you need to insert at the end of the list. This is always added after the last node. You will need to traverse the whole linked list. Time complexity is O(n) unless you have an extra pointer to the tail of the list in which case it is an O(1) operation. The function I've created to handle this is called **append()**.
