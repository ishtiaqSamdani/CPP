// https://leetcode.com/problems/linked-list-cycle-ii/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* quickS=head;
        ListNode* hawk=head;
        ListNode* hawk2=head;

        
        while(quickS!=NULL && quickS->next!=NULL){
            quickS=quickS->next->next;
            hawk=hawk->next;
            if(quickS==hawk){
                while(hawk!=hawk2){
                     hawk2=hawk2->next;
                     hawk=hawk->next;
                }
                
                return hawk;
               
                
            }
        }
        return NULL;
    }
};