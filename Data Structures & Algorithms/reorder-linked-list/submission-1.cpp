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
    void reorderList(ListNode* head) {
        if(head == NULL || head->next == NULL) return;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* l1 = head;
        ListNode* l2 = slow->next;
        slow->next = NULL;

        ListNode* dummy = NULL;
        ListNode* prev = l2;
        ListNode* curr = l2;

        while(curr != NULL){
            curr = curr->next;
            prev->next = dummy;
            dummy = prev;
            prev = curr;
        }

        l2 = dummy;
        while(l2 != NULL){
            ListNode* val = l1->next;
            l1->next = l2;
            l1 = val;
            ListNode* val2 = l2->next;
            l2->next = l1;
            l2 = val2;
        }
    }
};
