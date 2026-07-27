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
        if(!head) {return nullptr;}
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* cur = head;
        for(int i=1; i<=n;i++){
            cur  = cur->next;
        }
        while(cur!= nullptr){
            cur = cur->next;
            prev = prev->next;
        }
        ListNode* tmp1 = prev->next;
        prev->next = tmp1->next;
        delete tmp1;
        ListNode* tmp2 = dummy->next;
        delete dummy;
        return tmp2;

    }
};
