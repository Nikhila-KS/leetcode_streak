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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* temp=slow->next;
        slow->next=NULL;
        slow=head;
        ListNode* prev=NULL;
        ListNode*curr=temp;
        ListNode*frwd=temp;
        while(curr!=NULL){
            frwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=frwd;
        }
        temp=prev;
        while(temp!=NULL&&slow!=NULL){
            if(temp->val!=slow->val){
                return false;
            }
            temp=temp->next;
            slow=slow->next;
        }
        return true;
    }
};