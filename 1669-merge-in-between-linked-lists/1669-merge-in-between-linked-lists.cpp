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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        if(a==0){
            ListNode*blink=list1;
            ListNode* dummy=list1;
            int l=0;
            while(l!=b){
            dummy=dummy->next;
            l++;
            }
            blink=dummy->next;
            ListNode* l2=list2;
            while(l2->next!=NULL){
                l2=l2->next;
            }
            l2->next=blink;
            return list1;
        }
        
        ListNode* alink=list1;
        ListNode*blink=list1;
        ListNode* dummy=list1;
        int l=0;
        while(l!=b){
            if(l+1==a){
                alink=dummy;
            }
            dummy=dummy->next;
            l++;
        }
        blink=dummy->next;
        alink->next=list2;
        ListNode* l2=list2;
        while(l2->next!=NULL){
            l2=l2->next;
        }
        l2->next=blink;
        return list1;
        
        
    }
};