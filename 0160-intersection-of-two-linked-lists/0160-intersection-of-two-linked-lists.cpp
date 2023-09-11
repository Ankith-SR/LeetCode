class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* one = headA;
        ListNode* two = headB;

        while(one != two){
            if(one == NULL){
                one = headB;
            }
            else{
                one = one->next;
            }
            if(two == NULL){
                two = headA;
            }
            else{
                two = two->next;
            }
        }
        return one;
    }
};