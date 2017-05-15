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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *node=head;
        while(node)
        {
            while(node->next&&node->val==node->next->val)
            {
                node->next=node->next->next;
            }
            node=node->next;
        }
        return head;
        
    }
};