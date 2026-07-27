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
    bool hasCycle(ListNode* head) {
       ListNode* s = head;
       ListNode* f = head;
       
       
       while(f){
        s= s->next;
        f= f->next;
        if(f==nullptr){return false;}
        f= f->next;
        if(f==nullptr){return false;}
        if(f==s){
            return true;

       }}
       return false;

    }
};

       
