class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> mp;
        ListNode *temp=head;
        while(temp!=nullptr){
            mp[temp->val]++;
            temp=temp->next;
        }
        ListNode *res=new ListNode(0);
        temp=res;
        for(auto m:mp){
            if(m.second==1){
                temp->next=new ListNode(m.first);
                temp=temp->next;
            }
        }
        return res->next;
    }
};