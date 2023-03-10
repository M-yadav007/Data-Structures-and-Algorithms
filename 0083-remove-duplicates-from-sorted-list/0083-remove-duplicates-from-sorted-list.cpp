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

        ListNode* temp=head;
        if(head==NULL ||head->next==NULL)
        {
            return head;
        }
        ListNode *fast=head->next;;
        ListNode *slow=head;


        // do{
        //     int a=temp->val;
        //     int b=temp->next->val;
        //     if(a==b)
        //     {
        //         temp->next=temp->next->next;
        //     }
        //     temp=temp->next;

        // }while(temp!=NULL);

        while( fast!=NULL)
        {
            if(fast->val==slow->val)
            {
                slow->next=fast->next;
                delete fast;
                fast=slow->next;
            }
           else
           {
                      fast=fast->next;
            slow=slow->next;

           }
     
        }

        return head;
        
    }
};


