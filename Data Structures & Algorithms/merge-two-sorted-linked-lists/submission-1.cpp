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
        // Create a dummy node to act as the start of our merged list
        ListNode dummy(0);
        ListNode* tail = &dummy;

        // Traverse both lists while neither is empty
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                tail->next = list1;     // Append list1's node
                list1 = list1->next;    // Move list1 forward
            } else {
                tail->next = list2;     // Append list2's node
                list2 = list2->next;    // Move list2 forward
            }
            tail = tail->next;          // Move the tail forward
        }

        // Once one list is exhausted, simply attach the rest of the other list
        if (list1 != nullptr) {
            tail->next = list1;
        } else {
            tail->next = list2;
        }

        // Return the actual head, skipping the dummy node
        return dummy.next;
    }
};
