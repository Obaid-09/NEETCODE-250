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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return head;
        if(head->next == NULL && n == 1) return NULL;

        int nodes = 0;
        ListNode* node = head;
        while(node != NULL){
            nodes++;
            node = node->next;
        }

        int del = nodes - n;
        ListNode* prev(0);
        ListNode* curr = head;

        while(curr != NULL){
            if(del == 0){
                if(prev == NULL){
                    return curr->next;
                }
                prev->next = curr->next;
                curr->next = NULL;
                break;
            }else{
                prev = curr;
                curr = curr->next;
                del--;
            }
        }
        return head;
    }
};
