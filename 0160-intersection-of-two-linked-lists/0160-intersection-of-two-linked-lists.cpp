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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tmp1 = headA;
        ListNode* tmp2 = headB;
        while(tmp1 != NULL){
            tmp2 = headB;
            while(tmp2 != NULL){
                if(tmp1 == tmp2) return tmp1;
                tmp2 = tmp2 -> next;
            }
            tmp1 = tmp1 -> next;
        }
        return NULL;
    }
};