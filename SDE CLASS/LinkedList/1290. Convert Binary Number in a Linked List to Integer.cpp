// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/

//just a daily problem;

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
    int getDecimalValue(ListNode* head) {
        ListNode* ptr=head;
        int sum=0;
        while(ptr!=NULL){
            sum=sum*2+(ptr->val);
            // cout<<sum<<" ";
            ptr=ptr->next;
        }
        return sum;
        
    }
};