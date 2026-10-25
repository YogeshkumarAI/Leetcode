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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // first we have to calculte the size of linked list;
        int count = 0;
        ListNode *temp = head;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        // now we get the size of linked list;
        // now we have to make the counter till delete node;
        count -= n;
        
        if(count == 0){
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        // pointers;
        ListNode *curr = head;
        ListNode *prev = NULL;

        while(count--){
            prev = curr;
            curr = curr->next;

        }

        prev->next = curr->next;
        delete curr;

        return head;
    }
};