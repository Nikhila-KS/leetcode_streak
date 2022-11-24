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
public:                                        //approach 1(from the discussions!)
    ListNode* removeElements(ListNode* head, int val) {
        while(head && head->val == val) head = head->next;
        ListNode* cur = head;
        while(cur){
            if(cur->next && cur->next->val == val)
                cur->next = cur->next->next;
            
            else cur = cur->next;
            
        }
        return head;
    }
};
   

// class Solution {             // approach 2
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if(!head) return NULL;
//         head->next = removeElements(head->next, val);
//         return (head->val==val)? head->next:head;
//     }
// };