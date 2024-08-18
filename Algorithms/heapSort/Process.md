## Heap Sort
### Explanation

There are two main functions that are used in heap sort, its **Heapify** and the **Heap Sort** itself.
An array is treated like a tree which composed of parent nodes and child nodes, to keep track of this relation the **left child of the ith element is 2 * i + 1**, and the **right child is 2 * i + 2**, The **lower bound of the array can be get by number of elements / 2** (minus one because of 0 indexing but you get the idea), the lower bound is the last element in the array that has a child, this would be useful since we want to heapify starting from the last parent node.

### Heapify
Heapify function make sure that the parent element is greater than the child element (max heap in this case). When the child is greater than the parent it switched it's value and recursively call itself to fix the subtree affected. For example  
**Root node: 10**  
- **Left child: 20**  
    - **Left child: 15**  
    - **Right child: 4**  
- **Right child: 5**
 

if we call heapify in this array, it will switch the root node to left child since 20 is greater than 10 so it will become  
**Root node: 20**  
- **Left child: 10**  
    - **Left child: 15**  
    - **Right child: 4**  
- **Right child: 5**

as you can see there is a problem  15 is greater than 10 and again this is a max heap so the parents should be greater than the child that's why whenever there is a switch of positions, we recursively call heapify to fix the affected subtree. now it would be like this
**Root node: 20**  
- **Left child: 15**  
    - **Left child: 10**  
    - **Right child: 4**  
- **Right child: 5**





