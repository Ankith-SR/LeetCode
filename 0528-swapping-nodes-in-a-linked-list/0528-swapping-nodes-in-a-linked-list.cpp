class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int length = 0;
        ListNode* temp = head;
        
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        
        int n = length - k + 1;
        ListNode* one = head;
        ListNode* two = head;
        
        while (k > 1) { 
            one = one->next;
            k--;
        }
        while (n > 1) { 
            two = two->next;
            n--;
        }
        swap(two->val, one->val); 
        return head;
    }
};


