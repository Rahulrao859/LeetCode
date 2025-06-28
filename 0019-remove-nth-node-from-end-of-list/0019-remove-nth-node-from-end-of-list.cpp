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
    ListNode* ReverseLinkedList( ListNode* &head){

        if(head == NULL || head->next == NULL){
            return head;
        }
       
       // 1->2->3->4->5  this line reverse from 2  and return head at 5
        ListNode* smallhead = ReverseLinkedList(head->next);
      // this line connect5 to 1
        head->next->next = head;
        // 1 to NULL
        head->next = NULL;

        return smallhead;

    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head->next == NULL){
            return {};
        }
    
        head =  ReverseLinkedList(head);
    
       // Special case: if we need to remove the first node (which was the last node before reversal)
       if(n==1){
        ListNode* temp = head;
        head = head->next;
        delete temp;
        head = ReverseLinkedList(head);
        return head;
       }
        // Traverse to the (n-1)-th node
       ListNode* current = head;
        int cnt = 1;
        while(cnt < n-1){
           current = current->next;
           cnt++; 
        }

         ListNode* temp = current->next;
         current->next = current->next->next;
         delete temp;

         head = ReverseLinkedList(head);

         return head;
    }
};