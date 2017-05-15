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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        //         ListNode dummy(INT_MIN);
        // ListNode *l3=&dummy;
            if(NULL == l1) return l2;
    if(NULL == l2) return l1;
        ListNode *head=NULL;
                    if(l1->val>l2->val)
            {
                head=l2;
                l2=l2->next;
            }
            else 
            {
                       head=l1;
                l1=l1->next;
            }
        ListNode *l3=head;
        while(l1&&l2)
        {
            if(l1->val>l2->val)
            {
                l3->next=l2;
                l2=l2->next;
            }
            else 
            {
                       l3->next=l1;
                l1=l1->next;
            }
            l3=l3->next;
        }
        l3->next=l1?l1:l2;
        return head;
    }
};