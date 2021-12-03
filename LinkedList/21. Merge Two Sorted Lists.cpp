// https://leetcode.com/problems/merge-two-sorted-lists/

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
        
        // if(list1==NULL){
        //     return list2;
        // }
        // else if(list2==NULL){
        //     return list1;
        // }
        ListNode* mergeList=new ListNode(0);
        ListNode* temp=mergeList;
        ListNode* no1 = list1;
        ListNode* no2=list2;
        
        
        
        while(no1!=NULL && no2!=NULL){
            if(no1->val<no2->val){
                temp->next=no1;
                temp=temp->next;
                no1=no1->next;
            }else{
                temp->next=no2;
                temp=temp->next;
                no2=no2->next;
            }
        }
        while(no1!=NULL){
            temp->next=no1;
            no1=no1->next;
            temp=temp->next;
        }
        while(no2!=NULL){
            temp->next=no2;
            no2=no2->next;
            temp=temp->next;
        }
        temp->next=NULL;
        
        return mergeList->next;
    }
};