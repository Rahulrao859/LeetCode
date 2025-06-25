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
          // Edge case: if there's only one node, delete it
        if (head == NULL || head->next == NULL) {
            return NULL;
        }

        ListNode* prev = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        // Traverse the list with two pointers
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Now, 'slow' is pointing to the middle node
        // Update the 'prev' node to skip the 'slow' node (middle node)
        prev->next = slow->next;

        return head;

    }
};