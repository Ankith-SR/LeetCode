class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* curr = head;

        curr = curr->next;
        temp = temp->next;
        
        while (curr != NULL) {
            temp = temp->next;  
            
            if (temp == NULL) {
                break;  
            }
            
            if (temp->val != 0) {
                curr->val += temp->val;
                curr->next = temp->next;  
            } else {
                curr = curr->next;  
            }
        }
        ListNode* top = head;
        while (top->next != NULL && top->next->next != NULL) {
            top = top->next;
        }
        if (top->next != NULL) {
            top->next = NULL;
        }
        top->next = NULL;
        return head->next;
    }
};





