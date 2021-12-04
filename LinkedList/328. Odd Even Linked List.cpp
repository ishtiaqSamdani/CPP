// https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* eve=head->next;
        ListNode* eveptr=head->next;
        ListNode* odd=head;
        
        
        
        while(odd->next!=NULL && eve->next!=NULL){
            odd->next=odd->next->next;
            odd=odd->next;
            
            eve->next=eve->next->next;
            eve=eve->next;
            
        }
        
        odd->next=eveptr;
        if(eve!=NULL){
            eve->next=NULL;
        }
        return head;
        
    }
};