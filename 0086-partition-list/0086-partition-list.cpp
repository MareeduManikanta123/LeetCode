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
    ListNode* partition(ListNode* head, int x) {
        // Dummy heads
        ListNode beforeDummy(0);
        ListNode afterDummy(0);

        // Pointers to build lists
        ListNode* before = &beforeDummy;
        ListNode* after = &afterDummy;

        while (head != nullptr) {
            if (head->val < x) {
                before->next = head;
                before = before->next;
            } else {
                after->next = head;
                after = after->next;
            }
            head = head->next;
        }

        // Important to avoid cycle
        after->next = nullptr;

        // Connect two lists
        before->next = afterDummy.next;

        return beforeDummy.next;
    }
};
