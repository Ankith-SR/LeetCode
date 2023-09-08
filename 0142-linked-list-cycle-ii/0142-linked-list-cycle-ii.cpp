class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* loop = NULL;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                loop = fast;
                break;
            }
        }
        if(!loop){
            return loop;
        }
        while(head != loop){
            head = head->next;
            loop = loop->next;
        }
        return head;
    }
};