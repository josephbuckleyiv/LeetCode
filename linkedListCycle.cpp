/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *hare = head;
        ListNode *tortoise = head;
        
        while (tortoise != NULL) {
            
            if (tortoise != NULL) {
                tortoise = tortoise->next;
            }
            if ( hare != NULL) {
                hare = hare->next;
            }
            if ( hare != NULL) {
                hare = hare->next;
            }
            
            if (hare != NULL && tortoise != NULL && tortoise == hare) {
                return true;
            }
            
        }

        return false;
    }
};
