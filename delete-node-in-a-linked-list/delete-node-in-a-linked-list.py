# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """                                 #        start list                             1 -> (2) -> 3 -> 4         1 -> 2 -> (3) -> 4
        node.val = node.next.val            # current node == current.next                  1 -> (3) -> 3 -> 4         1 -> 2 -> (4) -> 4
        if node.next.next is not None:      # if current.next.next is there                 there is data there        no data there
            node.next = node.next.next      # current.next points to the next, next one     1 -> (3) -> 4              skip
        else:                               # if the next node is the tail                                             
            node.next = None                # just remove it                                                           1 -> 2 -> 4 -> None
        
        
