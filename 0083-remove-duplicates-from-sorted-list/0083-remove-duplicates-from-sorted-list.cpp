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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(head->next!=NULL && head->val==head->next->val){
            head=head->next;
        }
        ListNode* prev=head;
        ListNode* nnext=head;
        while(nnext!=NULL && prev->next!=NULL){
            nnext=prev->next;
            if(nnext->val==prev->val){
                prev->next=prev->next->next;
                nnext=prev->next;
                continue;
            }
            prev=nnext;
        }
        return head;
        
    }
};