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
    bool isPalindrome(ListNode* head) {
        
        // counting number of nodesl
        ListNode *temp = head;
        int count = 0;

        while(temp != NULL){
            count++;
            temp = temp -> next;
        }

        if(count < 2){
            return true;
        }
        // count /= 2;
        count /= 2;
        ListNode *curr = head;
        ListNode *prev = NULL;

        // breaking linked list into two parts;
        while(count--){
            prev = curr;
            curr = curr -> next;
        }

        prev->next = NULL;

        // reversing a second half;
        ListNode *front = NULL;
        prev = NULL;
        while(curr){
            front = curr->next;
            curr-> next = prev;
            prev = curr;
            curr = front;
        }

        // now comparsion btw both halfs;
        ListNode *head1 = head;
        ListNode *head2 = prev;

        while(head1){
            if(head1->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }


        return true;
    }
};