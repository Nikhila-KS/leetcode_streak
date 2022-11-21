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
    // ListNode* reversell(ListNode*head){
    //     ListNode* prev=NULL;
    //     ListNode* curr=head;
    //     ListNode* frwd=head;
    //     while(curr!=NULL){
    //         frwd=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=frwd;
    //     }
    //     return prev;
    // }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head==NULL){
        //     return NULL;
        // }
        // if(head->next==NULL && n>=1){
        //     return NULL;
        // }
        // ListNode* nhead=reversell(head);
        // ListNode* temp=nhead;
        // if(n==1){
        //     nhead=nhead->next;
        //     nhead=reversell(nhead);
        //     return nhead;
        // }
        // for(int i=1;i<n-1;i++){
        //     temp=temp->next;
        // }
        // temp->next=temp->next->next;
        // nhead=reversell(nhead);
        // return nhead;
        
        ListNode* iter = head;
        int len = 0, i = 1;
        while(iter) iter = iter -> next, len++;    // finding the length of linked list
        if(len == n) return head -> next;          // if head itself is to be deleted, just
        
        for(iter = head; i < len - n; i++) iter = iter -> next; // iterate first len-n nodes
        iter -> next = iter -> next -> next;      // remove the nth node from the end
        return head;
        
    }
};




