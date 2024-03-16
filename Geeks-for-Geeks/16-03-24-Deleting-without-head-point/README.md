# Delete Node in a Singly Linked List

## Problem Statement

You are given a node `del_node` of a Singly Linked List where you have to delete a value of the given node from the linked list but you are not given the head of the list.

By deleting the node value, we mean:
- The value of the given node should not exist in the linked list.
- The number of nodes in the linked list should decrease by one.
- All the values before & after the `del_node` node should be in the same order.

Note:
- Multiple nodes can have the same values as the `del_node`, but you must only remove the node whose pointer `del_node` is given to you.
- It is guaranteed that there exists a node with a value equal to the `del_node` value and it will not be the last node of the linked list.

## Example

### Input

Linked List: `1 -> 2`
del_node: `1`

### Output

`2`

Explanation: 
After deleting `1` from the linked list, we have remaining nodes as `2`.

### Input

Linked List: `10 -> 20 -> 4 -> 30`
del_node: `20`

### Output

`10 4 30`

Explanation: 
After deleting `20` from the linked list, we have remaining nodes as `10, 4, 30`.

## Approach

We are given the reference to the node `del_node` to be deleted. Since we do not have access to the head of the linked list, we cannot directly delete the node. Instead, we copy the data of the next node to `del_node` and then delete the next node.

## Pseudocode

```plaintext
function deleteNode(del_node):
    temp = del_node
    temp.data = temp.next.data
    temp.next = temp.next.next
