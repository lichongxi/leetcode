func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
    var plus int = 0
    var head_node *ListNode = nil
    var prev_node *ListNode = nil
    for {
        if l1 == nil && l2 == nil && plus == 0 {
            return head_node
        }
        var sum int = 0
        if l1 != nil {
            sum += l1.Val
        }
        if l2 != nil {
            sum += l2.Val
        }
        sum += plus
        plus = 0
        if sum > 9 {
            plus = 1
            sum %= 10
        }
        sum_node := &ListNode {sum, nil}
        if head_node == nil {
            head_node = sum_node
        }
        if prev_node != nil {
            prev_node.Next = sum_node
        }
        prev_node = sum_node
        if l1 != nil {
            l1 = l1.Next
        }
        if l2 != nil {
            l2 = l2.Next
        }
    } 
}