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
    ListNode* reverseList(ListNode* head) {
        ListNode* temp = head;
        stack<int> stackk;
        while(temp != NULL){
            stackk.push(temp->val);
            temp = temp->next;
        }
        temp = head;

        while(temp != NULL){
            temp->val = stackk.top();
            stackk.pop();
            temp = temp->next;
        }
        return head;
        
    }
};