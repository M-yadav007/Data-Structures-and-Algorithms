// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* swapPairs(ListNode* head) {
//         if (!head || !head->next) return head;
//         ListNode *dummyNode = new ListNode(0,head);
//         ListNode *curr = head;
//         ListNode *prev = dummyNode;
//         while(curr && curr->next){
//             prev->next = curr->next;
//             curr->next = prev->next->next;
//             prev->next->next = curr;
//             prev = curr;
//             curr = curr->next;
//         }
//         return dummyNode->next;
//     }
// };
class Solution  {
    public:

ListNode* swapPairs(ListNode* head) {
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* curr = temp;
        
        while(curr->next!= NULL && curr->next->next!= NULL)
        {
            ListNode* first = curr->next;
            ListNode* second = curr->next->next;
            first->next = second->next;
            curr->next = second;
            second->next = first;
            
            curr = curr->next->next;
        }
        
        
        return temp->next;
}
};