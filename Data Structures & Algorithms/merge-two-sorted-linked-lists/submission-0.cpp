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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* llist =&dummy;

        while(list1!=nullptr && list2!=nullptr){
            if(list1->val==list2->val){
                llist->next = list1;
                llist=llist->next;
                list1=list1->next;

                llist->next = list2;
                llist=llist->next;
                list2=list2->next;
            }
            else if(list1->val>list2->val){
                llist->next = list2;
                llist=llist->next;
                list2=list2->next;
            }else{
                llist->next = list1;
                llist=llist->next;
                list1=list1->next;
            }
        }

        if (list1 != nullptr) {
            llist->next = list1;
        }
        if (list2 != nullptr) {
            llist->next = list2;
        }

        return dummy.next;

    }
};
