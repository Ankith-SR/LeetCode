class Solution {
public:
    ListNode* doubleIt(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        curr = prev; 
        int carry = 0;
        ListNode* newHead = NULL;

        while (curr != NULL) {
            int val = 2 * curr->val + carry;
            carry = val / 10;
            val = val % 10;
            ListNode* newNode = new ListNode(val);
            newNode->next = newHead;
            newHead = newNode;
            curr = curr->next;
        }

        if (carry) {
            ListNode* newNode = new ListNode(carry);
            newNode->next = newHead;
            newHead = newNode;
        }

        return newHead;
    }
};

