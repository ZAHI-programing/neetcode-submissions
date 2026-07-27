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
        ListNode* list3;
        list3 = NULL;
        ListNode* cur1 = list1;
        ListNode* cur2 = list2;
        ListNode* cur = NULL;
        
        while(cur1 && cur2){
            ListNode* tmp = new ListNode;
            if(cur1->val < cur2->val){
                tmp->val = cur1->val;
                cur1 = cur1->next;
            }
            else{
                tmp->val = cur2->val;
                cur2 = cur2->next;
            }
            if(list3==NULL){
                list3=tmp;
            }
            else{
                cur->next = tmp;
            }
            cur=tmp;
        }
        ListNode* rest;
        if(cur1!=NULL){
            rest = cur1;
        }
        else{
            rest = cur2;
        }

        while(rest){
            ListNode* tmp = new ListNode;
            tmp->val=rest->val;
            tmp->next = NULL;
            if(list3 == NULL){
                list3 = tmp;
            }
            else{cur->next = tmp;}
            cur=tmp;
            rest=rest->next;

        }
        return list3;
    }
};
