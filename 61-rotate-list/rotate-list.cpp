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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        int len=0;
        ListNode* temp=head;

        while(temp){
            len++;
            temp=temp->next;
        }
        k=k%len;
        if(k==0) return head;
        temp=head;
        for(int i=1; i<len-k; i++){
            temp=temp->next;
        }
        ListNode* front=temp->next;
        temp->next=NULL;
        ListNode* h1=front;

        while(front->next){
            front=front->next;
        }

        front->next=head;
        return h1;

    }
};