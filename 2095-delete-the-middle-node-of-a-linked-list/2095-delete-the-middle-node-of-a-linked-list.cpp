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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int cnt = 0;
       if(head == NULL || head->next == NULL){
        return NULL;
       }
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        // if(cnt == 0 || cnt == 1){
        //     return NULL;
        // }
        int real_cnt = cnt / 2;
        temp = head;
        while(real_cnt > 1){
            
            temp = temp->next;
            real_cnt--;
        }
        ListNode* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        return head;
    }
};