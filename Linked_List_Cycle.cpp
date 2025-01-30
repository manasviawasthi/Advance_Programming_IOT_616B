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
        if (!head || !head->next) return false;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;           // Move slow pointer one step
            fast = fast->next->next;     // Move fast pointer two steps
            
            if (slow == fast) {          // Cycle detected
                return true;
            }
        }
        
        return false;  // No cycle
    }
};
