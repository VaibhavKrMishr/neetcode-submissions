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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        int i=1;
        ListNode* temp=head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* temp2 = dummy;

        while(i<left){
            temp2=temp;
            temp=temp->next;
            i++;
        }

        ListNode* curr=temp;
        ListNode* prev=nullptr;
        ListNode* fd= nullptr;
        while(left<=right ){
            fd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fd;
            left++;
        }
        temp2->next = prev; 
        temp->next = curr;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;

    }
};
