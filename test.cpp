/*

1. array representation of binary tree
1-indexed, at index 0, value is NULL

for a node at index i:
- parent is at index floor(i/2)
- left child is at index 2*i
- right child is at index 2*i + 1

what if parent doesn't children?
- represent as null

e.g. A B C NULL NULL F G


2. FULL binary trees
if any node in a tree has either 0 or 2 children then the tree is a FULL binary tree

3. Complete binary tree
a binary tree is said to be a complete binary tree if for all its level (except the last), the nodes appear as far left as possible

A TREE CAN BE FULL AND COMPLETE, NEITHER FULL OR COMPLETE, OR ONLY ONE

4. heap
max-heap - max value at top
min-heap - min value at top

array representation - not garenteed to be sorted, but first element will ALWAYS be max or min

*/