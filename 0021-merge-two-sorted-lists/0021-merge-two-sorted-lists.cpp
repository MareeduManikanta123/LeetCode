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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyList = new ListNode(-1);
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* head = dummyList;
        if(temp1 == NULL && temp2 == NULL){
            return NULL;
    }
        while(temp1 != NULL & temp2 != NULL){
            if(temp1->val <= temp2->val){
                dummyList->next = temp1;
                dummyList = dummyList->next;
                temp1 = temp1->next;
            }
            else{
                dummyList->next = temp2;
                dummyList = dummyList->next;
                temp2 = temp2->next;
            }
        }
        if(temp1){
            dummyList->next = temp1;
        }
        else{
            dummyList->next = temp2;
        }
        head = head->next;
        
        return head;
    }
};