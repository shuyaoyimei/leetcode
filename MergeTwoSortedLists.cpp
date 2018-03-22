/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head, **t = &head;
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                *t = l1;
                l1 = l1->next;
            }else{
                *t = l2;
                l2 = l2->next;
            }
            t= &((*t)->next);
        }
        *t = (l1 != NULL ? l1 :l2);
        return head;
    }
};
