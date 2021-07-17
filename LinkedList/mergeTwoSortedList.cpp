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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL)
			return l2;
		if (l2 == NULL)
			return l1;

		ListNode* currNode1 = l1;
		ListNode* currNode2 = l2;
		ListNode* currNode;
		ListNode* head;

		if (l1->val <= l2->val) {
			head = l1;
			currNode = l1;
			currNode1 = currNode1->next;
		}
		else {
			head = l2;
			currNode = l2;
			currNode2 = currNode2->next;
		}

		while ((currNode1 != NULL) && (currNode2 != NULL)) {
			if (currNode1->val <= currNode2->val) {
				currNode->next = currNode1;
				currNode1 = currNode1->next;
				currNode = currNode->next;
			} else {
				currNode->next = currNode2;
				currNode2 = currNode2->next;
				currNode = currNode->next;
			}
		}
		if (currNode1 == NULL) {
			currNode->next = currNode2;
		} else {
			currNode->next = currNode1;
		}

		return head;
	}
};