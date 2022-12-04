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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* v=head;
        while(v!=NULL){
            arr.push_back(v->val);
            v=v->next;
        }
        sort(arr.begin(),arr.end());
        v=head;
        for(int i=0;i<arr.size();i++){
            v->val=arr[i];
            v=v->next;
        }
        return head;
    }
};