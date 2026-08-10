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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return true;
        }
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode *second=slow;
        ListNode *prev=nullptr;
        while(second!=nullptr){
            ListNode *next=second->next;
            second->next=prev;
            prev=second;
            second=next;
        }
        slow=head;
        fast=prev;
        while (fast!=nullptr){
             if(slow->val != fast->val){
                return false;
            }
            slow=slow->next;
            fast=fast->next;
        }
        return true;

    }
};