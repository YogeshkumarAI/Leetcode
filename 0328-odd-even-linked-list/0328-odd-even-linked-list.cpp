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
    ListNode* oddEvenList(ListNode* head) {
        
        ListNode* dummy = new ListNode(0); // acts as head pointer;
        ListNode *odd = dummy;

        ListNode* dummy1 = new ListNode(0);
        ListNode *even = dummy1;

        int count = 0; // taking size of head;
       
        ListNode* temp = head;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        for(int i = 0; i < count; i++){
            if(i % 2 == 0){
                odd->next = new ListNode(head->val);
                odd = odd->next;
   
            }

            else{
                even->next = new ListNode(head->val);
                even = even->next;
            }

            head = head->next;
        }
        
        // now merging both of them;
        odd->next = dummy1->next;


        return dummy->next;
    }
};