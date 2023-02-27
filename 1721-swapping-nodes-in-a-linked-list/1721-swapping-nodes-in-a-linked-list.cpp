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
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode *one=head,*two=head,*three=head;

        int n=k-1;
        while(n--)
        {
            one=one->next;
            two=two->next;
        }

        for(;two!=NULL && two->next!=NULL;two=two->next)
        {
            three=three->next;
        }

        ListNode *fin=new ListNode(0);
        fin->val=one->val;
        one->val=three->val;
        three->val=fin->val;

        return head;


        
    }
};