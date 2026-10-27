# File-System-BFS-DFS
C program for file system representation and searching using BFS and DFS algorithms.
File System Representation and Search Using BFS and DFS

Project Details

- Course: Data Structures and Algorithms
- Language: C
- Institution: UKF College of Engineering and Technology (Autonomous)
- Semester: Third Semester

1. Objective

To represent a file system as a graph using an adjacency matrix and search for a specified file using Breadth-First Search (BFS) and Depth-First Search (DFS).

2. Introduction

A file system organizes files and directories on a computer. In this project, files and directories are represented as nodes in a graph, and their connections are represented as edges. An adjacency matrix stores these connections.

3. Algorithms

Breadth-First Search (BFS)

BFS visits neighboring nodes level by level. It uses a queue to manage the nodes waiting to be visited.

Depth-First Search (DFS)

DFS explores one path as deeply as possible before backtracking. It uses recursion in this implementation.

4. Sample Input

Enter number of nodes (1-20): 5
Enter adjacency matrix:
0 1 1 0 0
1 0 0 1 1
1 0 0 0 0
0 1 0 0 0
0 1 0 0 0
Enter starting node (0 to 4): 0
Enter target file node (0 to 4): 4

5. Sample Output

DFS Traversal: 0 1 3 4 2
File found using DFS.

BFS Traversal: 0 1 2 3 4
File found using BFS.

6. Result

The file system was represented using an adjacency matrix. BFS and DFS were implemented successfully to traverse the graph and determine whether the target file node could be reached from the starting node.

7. Conclusion

This project demonstrates how graph representation and traversal algorithms can be used to model a simplified file system and search for a target node.

8. Time Complexity

- BFS: O(V²) using an adjacency matrix.
- DFS: O(V²) using an adjacency matrix.

Here, V represents the number of nodes in the graph.
