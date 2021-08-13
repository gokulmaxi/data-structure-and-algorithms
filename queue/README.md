# queue
  * it is a linear data structure with first in first out principle
  * insertion happens in one end and deletion happens in another
  * enqueue  add element to one end 
  * dequeue removes and returns from one end
  * can be implemented using arrays and linked list
## queue using an array 
  * two pointer maintains the position of head and tail in array
  * initially head and tail points the first element 
  * to insert add element to the tail and point the tail pointer to next element
  * when tail points the last element of the array and there are empty space before head, tail points the first element 

## empty
  * if q.tail== q.head
    * return true
  * else 
    * return false

## isFull
  
  * if q.head = q.tail + 1
    * return true
  * else
    * return false 

## enqueue
  1. if isFull(q)
     * error queue overflow
     * return 
  2. else 
     * q[q.tail] = x
     * if q.tail == size        [check whether tail is at last ]   
        * q.tail = 1            [add it to the first element]
     3. else
        * q.tail = q.tail + 1
## dequeue
  1. if isEmpty(q)
     * error queue underflow
  2. else 
     * x = q[q.head]
     * if q.head == q.size
        * q.head =1
     * else 
        * q.head =q.head + 1
  3. return 
  
    
(eception)[https://www.geeksforgeeks.org/handling-the-divide-by-zero-exception-in-c/#:~:text=Dividing%20a%20number%20by%20Zero,which%20cannot%20be%20further%20processed.]