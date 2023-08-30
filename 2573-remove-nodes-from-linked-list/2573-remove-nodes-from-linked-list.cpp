class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode *newNode = removeNodes(head->next);

        if(newNode->val > head->val)
            return newNode;

        head->next = newNode;

        return head;
    }
};