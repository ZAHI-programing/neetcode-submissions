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
        if(!head){
            return head;
        }
        ListNode* next = head;
        ListNode* cur = head;
        ListNode* prev;
        cur = cur->next;
         next->next = nullptr;
        while(cur){
        prev = cur->next;
        cur->next=next;
        next=cur;
        cur = prev;}
        head = next;
        return head;
        
    }
};
