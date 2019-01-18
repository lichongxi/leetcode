class Solution:
    def addTwoNumbers(self, l1, l2):
        plus = 0
        head_node = {}
        prev_node = {}
        while 1 == 1:
            sum = 0
            if (not l1) and (not l2) and plus == 0:
                return head_node
            if l1:
                sum += l1.val
                l1 = l1.next
            if l2:
                sum += l2.val
                l2 = l2.next
            sum += plus
            plus = 0
            if sum > 9:
                plus = 1
                sum %= 10
            sum_node = ListNode(sum)
            if not head_node:
                head_node = sum_node
            if prev_node:
                prev_node.next = sum_node
            prev_node = sum_node