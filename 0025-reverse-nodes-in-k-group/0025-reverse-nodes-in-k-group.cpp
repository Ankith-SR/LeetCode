class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if(head == NULL){
            return NULL;
        }
        ListNode* next = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 0;

        ListNode* ptr = head;
        for(int i = 0; i < k; i++) {
            if(ptr == NULL){
                return head;
            }
            ptr = ptr->next;
        }


        while(curr != NULL && count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }

        if(next != NULL){
            head->next = reverseKGroup(next,k);
        }
        return prev;
    }
};