# Trees
- Trees a non linear data structure following a hierarchal order
- It consists child nodes and parent nodes 
- Important terms in tree [refer this link](https://www.codesdope.com/course/data-structures-trees/)

##  properties of tree 
- number of nodes in a tree must be finite and non empty 
- every node must be connected to some other node
- there should be no cycle among node in a tree

### code for tree 
- [goto program](./tree.c)

## Binary trees
- a tree with at most 2 children
- binary trees are further classified into
  * **Full binary tree** every node has 2 children except the leaves
  *  **complete binary tree** completely filled with a possible exception at the bottom level i.e., the last level may not be completely filled and the bottom level is filled from left to right. 
  *  for detailed [explaination](https://www.codesdope.com/course/data-structures-binary-trees/)
- Total no of nodes in perfect binary tree = 2 ^ (h+1) -1

### array representation of binary tree 
- for a node i 
  * parent = i/2
  * left child is 2i 
  * right child is 2i + 1
- for an incomplete binary tree the empty element is left empty in array

### coding a binary tree in array 
> right_child(index)
1. if tree index is not null and (2*index +1 ) <= tree size
    1. return (2*index +1)
2. else return null

> left_child(index)
1. if tree index != null and (2*index) <=tree size 
    1. return (2*index)
2. else return null

> parent(index)
1. if tree index != null and floor(index/2) != tree size 
    1. return [floor](https://www.tutorialspoint.com/c_standard_library/c_function_floor.htm)(index/2) 


