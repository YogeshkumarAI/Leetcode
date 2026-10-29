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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return NULL;
        vector<int>ans;
        ans.push_back(head->val); // pushing first node;

        ListNode* curr = head->next;

        while (curr != nullptr) {
            if (ans.back() != curr->val) {
                ans.push_back(curr->val);
            }

            curr = curr->next;
        }

        // now we have to insert all the ans element into new linked list;
        ListNode *dummy = new ListNode(0);
        ListNode *res = dummy;

        for(int i = 0; i < ans.size(); i++){
            res->next = new ListNode(ans[i]);
            res = res->next;
        }
        return dummy->next;
    }
};