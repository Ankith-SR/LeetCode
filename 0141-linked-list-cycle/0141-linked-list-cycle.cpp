class Solution {
public:
bool cycle(ListNode* slow,ListNode* fast){
    if(fast == NULL || fast->next == NULL){
        return false;
    }
    else if(slow == fast){
        return true;
    }
    else{
        return cycle(slow->next,fast->next->next);
    }
}
    bool hasCycle(ListNode *head) {
        if(head && head->next){
            return cycle(head->next,head->next->next);
        }
        else{
            return false;
        }
    }
};