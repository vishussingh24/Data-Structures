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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return nullptr;
        if(!head->next) return head;

        ListNode* slow=head;

        ListNode* dummy = new ListNode(-1, head);
        ListNode* temp = dummy;

        while(slow){
            if(slow->next && slow->next->val == slow->val){
                int val = slow->val;
                while(slow && slow->val == val){
                    slow=slow->next;
                }
                temp->next=slow;
            }else{
                temp=slow;
                slow = slow->next;
            }
        }


        return dummy->next;
    }
};