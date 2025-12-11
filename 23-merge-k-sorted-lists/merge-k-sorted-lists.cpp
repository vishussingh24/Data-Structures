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

    

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        if(!l1 && !l2) return nullptr;

        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(l1 && l2){
            if(l1->val < l2->val){
                ListNode* node = new ListNode(l1->val);
                temp->next = node;
                temp = node;
                l1 =l1->next;
            }else if(l1->val == l2->val){
                ListNode* node1 = new ListNode(l1->val);
                ListNode* node2 = new ListNode(l2->val);
                temp->next = node1;
                temp = node1;
                l1 = l1->next;
                temp->next = node2;
                temp = node2;
                l2 =l2->next;
            }else{
                ListNode* node = new ListNode(l2->val);
                temp->next = node;
                temp = node;
                l2 =l2->next;
            }
        }

        while(l1) {
            ListNode* node = new ListNode(l1->val);
            temp->next = node;
            temp = node;
            l1 =l1->next;
        }
        while(l2){
            ListNode* node = new ListNode(l2->val);
            temp->next = node;
            temp = node;
            l2 =l2->next;
        }
        return dummy->next;
    }

    ListNode* merge(vector<ListNode*>& lists, int l, int r){
        if(l>r) return nullptr;
        if(l==r) return lists[l];
        int mid=l+(r-l)/2;
        ListNode* left = merge(lists, l, mid);
        ListNode* right = merge(lists, mid+1, r);

        return mergeTwoLists(left, right);

    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return nullptr;

        return merge(lists, 0, lists.size()-1);
    }
};