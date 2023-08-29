class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head){
            return NULL;
        }
        if(head->next == NULL){
            return NULL;
        }
        ListNode* fast = head->next->next;
        ListNode* slow = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};