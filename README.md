# LC1490
Clone N-ary Tree

This is a BFS approach solution. The intuition is simple: Use a map to easily access the new node corresponding to the original node while we search tree via BFS. For each node, we create new nodes for its children and push them to the queue for further loop.

Runtime complexity: O(n), since we loop over each node in the original tree. n is total number of nodes.

Space complexity: O(log(n)), n is total number of nodes.
