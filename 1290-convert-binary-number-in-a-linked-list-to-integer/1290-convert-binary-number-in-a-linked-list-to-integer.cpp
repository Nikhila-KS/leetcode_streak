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
    ListNode*  reverse(ListNode* head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode*frwd=head;
        while(curr!=NULL){
            frwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frwd;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        ListNode*nhead=reverse(head);
        int i=0,sum=0;
        while(nhead!=NULL){
            sum=sum+((nhead->val)*(pow(2,i)));
            i++;
            nhead=nhead->next;
        }
        return sum;
    }
};