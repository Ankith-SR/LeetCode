/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* curr = head;

        while (curr != NULL) {
            if (numSet.find(curr->val) != numSet.end()) {
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
            } 
            else {
                prev = curr;
                curr = curr->next;
            }
        }
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};