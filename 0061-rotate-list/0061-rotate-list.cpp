class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* tail = head;
        ListNode* point = head;

        int length = 0;

        while(slow != NULL){
            length++;
            slow = slow->next;
        }

        k = k % length;

        if(k == 0){
            return head;
        }

        slow = head;

        while(k-- && slow!=NULL){
            slow = slow->next;
        }

        while(slow != NULL){
            tail = slow;
            point = fast;
            slow = slow->next;
            fast = fast->next;
        }
        tail->next = head;
        point->next = NULL;

        return fast;

    }
};