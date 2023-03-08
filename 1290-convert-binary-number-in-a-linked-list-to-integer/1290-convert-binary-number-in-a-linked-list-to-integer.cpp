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
    ListNode* F(ListNode* h) {
        ListNode* prev = nullptr, *next = h;
        while(h) {
            next = h -> next;
            h -> next = prev;
            prev = h;
            h = next;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        int answer = 0;
        int cnt = 0;
        head = F(head);
        while(head) {
            int val = head->val;
            if(val) answer += pow(2, cnt);
            head = head->next;
            cnt++;
        }
        return answer;
    }
};