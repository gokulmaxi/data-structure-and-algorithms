# Binary search tree
- left_subtree (keys) < node (key) ≤ right_subtree (keys) 

## searching in BST
- BST can perform searching in O(h)[height of the tree]

> search(x,t)
- if t.root != null
    1. if t.root.data == x
       * return r
    2. else if t.root.data > x 
       * return search(x,t.root.left)
    3. else 
       * return search(x,t.root.right)
> maximum(T)
- if (n.right ==null)
    * return n
- else
    * return maximum(n.right)

>minimum(T)
- if (n.left==null)
    * return n
- else 
    * return minimum(n.left)

## insertion in binary tree

- node should be inserted according to binary trees property 
- use a temp pointer and find the place to be inserted and insert the node 
> insert(T,n)
- temp = T.root
- newParent =NULL
- while temp != NULL
    * y = temp
    * if n.data < temp.data
        * temp = temp.left
    * else 
        * temp = temp.right
- if y == null
    * t.root = n 
- else if n.data < y.data
    * y.left = n
- else 
    * y.right = n

## deletion in binary search tree
- to delete a node we transplant a one sub tree in place of another

> transplant (T, u,v)

- if u.parent == NULL
     * t.root = v
- else if u = u.parent.left 
    * u.parent.left = v
- else
    * u.parent.left = v 
- if v != NULL
    * v.parent= u.parent
> delete(T,z)
```
if z.left == NULL
      TRANSPLANT(T, z, z.right)
  elseif z.right == NULL
      TRANSPLANT(T, z, z.left)
  else
      y = MINIMUM(z.right) //minimum element in right subtree
      if y.parent != z //z is not direct child
          TRANSPLANT(T, y, y.right)
          y.right = z.right
          y.right.parent = y
      TRANSPLANT(T, z, y)
      y.left = z.left
      y.left.parent = y
```
