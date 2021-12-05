// https://leetcode.com/problems/middle-of-the-linked-list/

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


// fast pointer and slow pointer

// if fast(2kmph) pointer reaches last node then slow(1kmph) pointer will be pointing
//  at middle element

// remember the condition :

// while(fast->next!=NULL && fast ->next->next!=NULL)




class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast->next!=NULL){
            return slow->next;
        }
        
        return slow;
        
    }
};