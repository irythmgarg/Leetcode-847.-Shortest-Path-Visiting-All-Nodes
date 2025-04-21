# Leetcode-847.-Shortest-Path-Visiting-All-Nodes
**Shortest Path Visiting All Nodes
This repository contains a C++ solution to the Shortest Path Visiting All Nodes problem using BFS with bitmasking. The goal is to determine the minimum number of steps required to visit every node in an undirected graph at least once.
---
🚩 Problem Statement
Given an undirected, connected graph with n nodes (labeled from 0 to n-1), return the shortest path length that visits every node at least once. You can start and end at any node.
---
💡 Approach
Treat each state as a pair of:

current node

a bitmask representing visited nodes.

Perform a Breadth-First Search (BFS) starting from all nodes.

Use a set to avoid revisiting the same (node, visited mask) pair.

Stop once a state reaches the bitmask where all nodes are visited.
---
✨ Key Concepts
Bitmasking: Efficient way to track visited nodes.

BFS: Ensures shortest path is found.

Set: Prevents redundant work by tracking visited states.
---
🧠 Example
cpp
Input:
graph = [[1,2,3],[0],[0],[0]]

Output:
4

Explanation:
One shortest path: 1 → 0 → 2 → 0 → 3 (or any permutation visiting all)
⏱️ Time & Space Complexity
Time Complexity: O(N × 2^N), where N is the number of nodes.

Space Complexity: O(N × 2^N) for queue and visited set.

---
🧩 Applications
TSP approximation (Traveling Salesman Problem)

Graph traversal with state tracking

Network routing problems**
