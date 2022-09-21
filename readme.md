# Data Structures and Algorithms

## Data Structures - Implementations and Core Operations

### Lists (Arrays)

Operations:

- append() - at beginning or end
- pop()
- index

Notes

- compact representation
- constant time access at index (simple insertion)
- memory locality (can leverage caching)
- dynamic arrays (amortised cost)


### Linked Lists

- representation (SLL, DLL): go, c, python
- searching a list
- insertion into a list
- deletion from a list

Notes

- overflow can never occur
- complex insertion
- it can be faster for manipulating large elements due to use of pointers/references
- requires more space to store than an array
- does not allow efficient random access
- worse performance due to non-locality in memory
- well suited to strings, recursion 

### Stacks

Ops
- push/put
- pop/get

Notes
- LIFO
- efficient when order does not matter
- natural for recursive algos

### Queues 

Ops
- enqueue/put
- dequeue/get

Notes
- FIFO
- fair for controlling wait times (minimising max wait time)
- more tricky than stacks to implement

### Priority queues

Ops
- insert
- find_min / find_max
- del_min / del_max
- implementations
  - unsorted list
  - LL
  - balanced search tree

### Hash Tables

Ops
- hashing
- conflict resolution

### Dictionaries

Ops
- search (key)
- insert 
- delete
- min/max
- predecessor/successor

Notes
- implementations
  - unsorted list
  - sorted list
  - unsorted SLL
  - sorted SLL
  - unsorted DLL
  - sorted DLL
  
### Heaps 

Ops
- get_min/get_max
- insert
- delete 
- heapsort

### Binary Search Trees

Notes
- variant is balanced search trees
- nodes can have a pointer to parent

Ops
- searching
- find min/max
- traversal (x3)
- insertion
- deletion

### Graphs

Notes
- weighted
- unweighted
- implementations
  - adjacency matrix
  - adjacency list

## Algorithms

### Searching

Binary Search

### Sorting

- insertion Sort
- merge Sort
- quick Sort
- heap Sort
- distribution sort
- radix Sort

### Graph Algorithms

- Breadth-First Search
- Depth-First Search
- applications of BFS/DFS
- topological sort
- Dijkstra
- A*
