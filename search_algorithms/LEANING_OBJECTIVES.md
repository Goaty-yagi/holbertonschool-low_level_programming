# Learning Objectives

- What is a search algorithm
- What is a linear search
- What is a binary search
- What is the best search algorithm to use depending on your needs
- What is the term Space Complexity


## 1, What is a search algorithm
A search algorithm is a step-by-step process used to locate a specific item within a collection of data. 

- Linear Search: This is a simple algorithm that iterates through each element in a collection (e.g., an array) until it finds the target element or reaches the end of the collection.

- Binary Search: It is specifically designed for searching in sorted collections. Binary search is more efficient than linear search for sorted data. It repeatedly divides the search space in half, narrowing down the possible locations of the target element until it is found.
ex)Searching item in BST

- Hashing: Hash-based search algorithms use hash functions to map keys to specific locations in a data structure, such as a hash table. This enables quick retrieval of information based on the key.

- Depth-First Search (DFS) and Breadth-First Search (BFS): These are graph search algorithms. DFS explores as far as possible along each branch before backtracking, while BFS explores all the vertices at the current depth before moving on to the next level.

## 2, What is a linear search

- Linear Search: This is a simple algorithm that iterates through each element in a collection (e.g., an array) until it finds the target element or reaches the end of the collection.

## 3, What is a binary search

- Binary Search: It is specifically designed for searching in sorted collections. Binary search is more efficient than linear search for sorted data. It repeatedly divides the search space in half, narrowing down the possible locations of the target element until it is found.
ex)Searching item in BST

## 4, What is the best search algorithm to use depending on your needs

### Linear Search:

- Scenario: Suitable for small datasets or when the data is not sorted.
- Advantages: Simplicity and ease of implementation.
- Disadvantages: Inefficient for large sorted datasets.

## Binary Search:

- Scenario: Applicable to sorted datasets.
- Advantages: Efficient for large sorted datasets, with a time complexity of O(log n).
- Disadvantages: Requires the data to be sorted.

## Hashing (Hash Table):

- Scenario: Efficient for key-based searches.
- Advantages: Constant time average-case complexity for search, insert, and delete operations.
- Disadvantages: Collisions and hash function quality can impact performance.

## Depth-First Search (DFS) and Breadth-First Search (BFS):

- Scenario: Useful for graph traversal and search problems.
- Advantages: Versatility in solving graph-related problems.
- Disadvantages: May not be the most efficient for certain tasks.

## 5, What is the term Space Complexity