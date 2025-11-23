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
    ListNode* left;

    bool pal(ListNode* head){

        if(head==nullptr) return true;

        bool isPal=pal(head->next);
        if(!isPal) return false;

        bool isEqual=(left->val == head->val);
        left=left->next;
        return isPal && isEqual;

    }

    bool isPalindrome(ListNode* head) {
        left=head;
        return pal(head);
    }
};