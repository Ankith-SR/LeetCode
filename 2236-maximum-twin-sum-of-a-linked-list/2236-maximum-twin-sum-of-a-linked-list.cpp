class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode* fast = head->next;
        ListNode* slow = head;
        while (fast && fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* second = slow->next;
        slow->next = NULL;
        
        ListNode* prev = NULL;
        ListNode* curr = second;
        ListNode* temp = second;
        while (temp) {
            temp = temp->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        second = prev;
        
        int mini = INT_MIN;
        while (head && second) { 
            mini = max(mini, head->val + second->val);
            head = head->next;
            second = second->next;
        }
        return mini;
    }
};
