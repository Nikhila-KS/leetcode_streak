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
    ListNode* reversell(ListNode*head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* frwd=head;
        while(curr!=NULL){
            frwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frwd;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL && n>=1){
            return NULL;
        }
        ListNode* nhead=reversell(head);
        ListNode* temp=nhead;
        if(n==1){
            nhead=nhead->next;
            nhead=reversell(nhead);
            return nhead;
        }
        for(int i=1;i<n-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        nhead=reversell(nhead);
        return nhead;
        
    }
};