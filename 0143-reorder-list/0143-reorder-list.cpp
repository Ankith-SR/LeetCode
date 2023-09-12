class Solution {
public:
    void reorderList(ListNode* head) {

        if(!head){
            return;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        if(fast->next){
            slow = slow->next;
        }

        while(slow){
            fast = slow->next;
            slow->next = prev;
            prev = slow;
            slow = fast;
        }
        slow = prev;

        while(head && slow){
            fast = head->next;
            prev = slow->next;
            head->next = slow;
            slow->next = fast;
            head = fast;
            slow = prev;
        }

        if(head && head->next){
            head->next->next = NULL;
        }
    }
};