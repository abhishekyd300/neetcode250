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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        vector<int>nodes;

        while(list1){
            nodes.push_back(list1->val);
            list1=list1->next;
        }

        while(list2){
            nodes.push_back(list2->val);
            list2=list2->next;
        }

        sort(nodes.begin(),nodes.end());

        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        int i=0;

        while(i<nodes.size()){
            temp->next=new ListNode(nodes[i]);
            temp=temp->next;
            i++;
        }

        return dummy->next;
    }
};
