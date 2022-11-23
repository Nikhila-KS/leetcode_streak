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
    //     ListNode*prev=NULL;
    //     ListNode*curr=head;
    //     ListNode*frwd=head;
    //     while(curr!=NULL){
    //         frwd=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=frwd;
    //     }
    //     return prev;
    // }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
//         ListNode* temp=head;
//         ListNode*begin;
//         while(temp->val!=right){
//             if(temp->next->val==left){
//                 begin=temp;
//             }
//         }
//         ListNode*end=temp->next;
//         temp->next=NULL;                       //  TLE
        
//         ListNode* nnode=reversell(begin->next);
        
//         begin->next=nnode;
//         while(nnode->next!=NULL){
//             nnode=nnode->next;
//         }
//         nnode->next=end;
//         return head;
        
        
         ListNode *dummy = new ListNode(0); // created dummy node
        dummy->next = head;
        ListNode *prev = dummy; // intialising prev pointer on dummy node
        
        for(int i = 0; i < left - 1; i++)
            prev = prev->next; // adjusting the prev pointer on it's actual index
        
        ListNode *curr = prev->next; // curr pointer will be just after prev
        // reversing
        for(int i = 0; i < right - left; i++){
            ListNode *forw = curr->next; // forw pointer will be after curr
            curr->next = forw->next;
            forw->next = prev->next;
            prev->next = forw;
        }
        return dummy->next;
    }
};