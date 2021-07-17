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
        ListNode* temp = head;
        ListNode* temp2 = head;
        for (int i = 0; i < n; i++) {
            if (temp2->next == nullptr) {
                if (i == n - 1) {
                    head = head->next;
                }
                return head;
            }
            temp2 = temp2->next;
        }
        while (temp2->next != nullptr) {
            temp = temp->next;
            temp2 = temp2->next;
        }
        temp->next = temp->next->next;
        return head;

    }
};