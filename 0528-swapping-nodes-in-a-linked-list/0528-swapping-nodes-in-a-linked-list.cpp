class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int length = 0;
        ListNode* temp = head;
        
        while (temp != NULL) {
            temp = temp->next;
            length++;
        }
        
        int n = length - k;
        
        ListNode* ans = new ListNode();
        ans->next = head;
        ListNode* one = ans;
        ListNode* two = ans;
        
        while (k) {
            one = one->next;
            k--;
        }
        
        while (n) {
            two = two->next;
            n--;
        }
        
        swap(two->next->val, one->val); 
        
        return ans->next;
    }
};
