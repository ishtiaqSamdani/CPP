// https://leetcode.com/problems/reverse-linked-list/

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

// take three pointers previous(inital:NULL), present(initial:head) and next(initial:head->next)
//  then change pointers 



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* pas=NULL;
        ListNode* pre=head;
        ListNode* nex=head->next;
        
        while(pre!=NULL){
            pre->next=pas;
            pas=pre;
            pre=nex;
            if(nex!=NULL){
                nex=nex->next;
            }
        }
        return pas;
        
    }
};