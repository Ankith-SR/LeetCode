class Solution {
public:
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(!list1){
        return list2;
    }
    if(!list2){
        return list1;
    }

    ListNode* head;
    ListNode* tail;

    if(list1->val < list2->val){
        head = list1;
        tail = list1;
        list1 = list1->next;
    }
    else{
        head = list2;
        tail = list2;
        list2 = list2->next;
    }
    while(list1 && list2){
        if(list1->val < list2->val){
            tail->next = list1;
            list1 = list1->next;
        }
        else{
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if(list1){
        tail->next = list1;
    }
    if(list2){
        tail->next = list2;
    }
    return head;
}
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0){
            return NULL;
        }
        while(lists.size() > 1){
            ListNode* l1 = lists.back();
            lists.pop_back();

            ListNode* l2 = lists.back();
            lists.pop_back();

            lists.push_back(mergeTwoLists(l1,l2));
        }
        return lists[0];
    }
};