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
        ListNode *dummy=new ListNode(0);
        ListNode *tail=dummy;
        ListNode *A=list1;
        ListNode *B=list2;
        while(A!=nullptr && B!=nullptr){
            if(A->val < B->val){
                tail->next=A;
                tail=tail->next;
                A=A->next;
            }
            else{
                tail->next=B;
                tail=tail->next;
                B=B->next;
            }
        }
        tail->next=(A!=nullptr)? A:B;
        return dummy->next;
    }
};