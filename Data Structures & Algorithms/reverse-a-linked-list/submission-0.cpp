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
    ListNode* reverseList(ListNode* head) {
        ListNode* head1=head;
        ListNode* prev=NULL;
        ListNode* fut=NULL;

        while(head1){
            fut=head1->next;
            head1->next=prev;
            prev=head1;
            head1=fut;
        }
        return prev;
    }
};
