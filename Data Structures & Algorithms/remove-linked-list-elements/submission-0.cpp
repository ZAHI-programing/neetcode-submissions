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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=nullptr && head->val == val){
            ListNode* tmp = head;
            head = head->next;
            delete tmp;
        }
        if(head == nullptr){return head;}
        ListNode* prev = head;
        ListNode* cur = head->next;
        while(cur!= nullptr){
            if(cur->val == val){
                ListNode* tmp =  cur;
                prev->next = cur->next;
                cur = cur->next;
            }else{
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
};