ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	int plus = 0;
	ListNode *prev_node = nullptr;
	ListNode *head_node = nullptr;
	while (true)
	{
		int sum;
		if (l1 == nullptr && l2 == nullptr && plus == 0)
		{
			return head_node;
		}
		if (l1 != nullptr)
		{
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2 != nullptr)
		{
			sum = l2->val;
			l2 = l2->next;
		}
		sum += plus;;
		plus = 0;
		if (sum > 9)
		{
			plus = 1;
			sum %= 10;
		}
		ListNode *sum_node = new ListNode(sum);
		if (head_node == nullptr)
		{
			head_node = sum_node;
		}
		if (prev_node != nullptr)
		{
			prev_node->next = sum_node;
		}
		prev_node = sum_node;
	}
}