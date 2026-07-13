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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // if(head==nullptr) return nullptr;
        // if(head->next==nullptr) return nullptr;

        int k=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            k++;
        }
        int x=k-n;
        ListNode* temp2=head;
        for(int i=1;i<x &&temp2->next!=nullptr;i++){
            temp2=temp2->next;
        }
        if(x==0){
            ListNode* t=head;
            head=head->next;
            delete t;
            return head;
        }
        ListNode* t3=temp2->next;
        temp2->next=temp2->next->next;
        delete t3;
        return head;
    }
};
