# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        a=[] #先把a設成很小的 短短的陣列
        while head!=None:
            a.append(head.val)
            head=head.next
        #print(a) #先印出陣列
        N=len(a)
        for i in range(N):
            if a[i]!=a[N-1-i]:return False
        return True