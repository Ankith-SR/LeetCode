class Solution
{
    public:
        ListNode* insertGreatestCommonDivisors(ListNode *head)
        {
            ListNode *node = head;

            while (node->next != NULL)
            {
                ListNode *gcd = new ListNode(__gcd(node->val, node->next->val));

                gcd->next = node->next;
                node->next = gcd;
                node = node->next->next;
            }
            return head;
        }
};