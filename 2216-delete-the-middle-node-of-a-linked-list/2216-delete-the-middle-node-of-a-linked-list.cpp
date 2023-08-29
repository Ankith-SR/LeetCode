class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(!head){
            return NULL;
        }
        int length = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            length++;
        }
        if(length <= 1){
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