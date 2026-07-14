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
    void reorderList(ListNode* head) {
        ListNode* temp=head;
        vector<int>val;
        while(temp!=nullptr){
            val.push_back(temp->val);
            temp=temp->next;
        }
        int left=0;
        int right=val.size()-1;

        ListNode* llist=head;
        while(left <= right && llist != nullptr){
            llist->val=val[left++];
            llist=llist->next;

            if (llist == nullptr) break;
            
            llist->val=val[right--];
            llist=llist->next;
        }
        // return dummy.next;
    }
};
