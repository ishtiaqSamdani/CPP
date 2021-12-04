// https://leetcode.com/problems/linked-list-cycle/

//*******************************************************
// *********fast pointer and slow pointer ***************
//*******************************************************

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
    bool hasCycle(ListNode *head) {
        ListNode* hawkeye=head;
        ListNode* quickSilver=head;
        
        while(quickSilver!=NULL && quickSilver->next!=NULL){
            quickSilver=quickSilver->next->next;
            hawkeye=hawkeye->next;
            
            if(hawkeye==quickSilver){
                return true;
            }
        }
        return false;
    }
};