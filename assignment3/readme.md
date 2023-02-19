1. lines 5-9 show the implementation of an object class that forms a linked list. it has an int attached to it that holds a student id and a reference to another node in it.
2. lines 13-23 are a simple function that prints all the nodes in the given linked list. it is not part of the assignment.
3. lines 26-48 show a function that add a node to the end of the list. it is two smaller functions, one that creates a new node that points to NULL to end the list, and one that points the next-to-last node at the new node. There is also a safety check if the list is empty, in which case the new node becomes the only object in the list. I was going to implement the ability for a user to create nodes in the command prompt, so this would've been a safety feature for that.
4. lines 51-55 delete the first node. It just replaces where the "head" node points. If there's no first node to point to, there is no first node.
5. lines 57-59 contain a peek function. This is just a smaller version of the function that prints the full list.
6. lines 63-94 is the "main" function. This is the driver code that calls other functions to demonstrate their use.
