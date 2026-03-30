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
        int count=0;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        while(temp){
            count++;
            temp=temp->next;     
        }

        ListNode* curr=dummy;
        int m=count-n;

        while(m--){
            curr=curr->next;
        }

        curr->next=curr->next->next;

        return dummy->next;
        
    }
};
