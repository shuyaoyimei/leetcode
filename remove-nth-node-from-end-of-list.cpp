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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode** pos = &head;
        ListNode * poi = head;
        for(int i=0; i < n;i++){
            poi = poi->next;
        }
        while(poi != NULL){
            poi = poi->next;
            pos = &((*pos)->next);
        }
        *pos = (*pos)->next;
        return head;
    }
};
