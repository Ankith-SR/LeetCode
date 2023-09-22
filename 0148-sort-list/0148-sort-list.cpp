class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        
        ListNode* middle = findMiddle(head);
        ListNode* secondHalf = middle->next;
        middle->next = NULL;
        
        ListNode* left = sortList(head);
        ListNode* right = sortList(secondHalf);

        return merge(left, right);
    }
    
private:
    ListNode* findMiddle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
    
    ListNode* merge(ListNode* left, ListNode* right) {
        ListNode dummy(0);
        ListNode* current = &dummy;
        
        while (left != NULL && right != NULL) {
            if (left->val < right->val) {
                current->next = left;
                left = left->next;
            } else {
                current->next = right;
                right = right->next;
            }
            current = current->next;
        }
        
        if (left != NULL) {
            current->next = left;
        } else {
            current->next = right;
        }
        
        return dummy.next;
    }
};
