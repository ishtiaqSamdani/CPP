// https://leetcode.com/problems/add-two-numbers/submissions/
/**
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//big problem
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        ListNode* head=new ListNode();
        ListNode* ptr=head;
        int carry=0;
        while(ptr1!=NULL && ptr2!=NULL){
            int sum=0;
            sum=ptr1->val+ptr2->val+carry;
            if(sum>=10){
                sum=sum%10;
                carry=1;
            }
            else{
                carry=0;
            }
            ListNode* newPtr=new ListNode(sum);
            ptr->next=newPtr;
            ptr=ptr->next;
            
            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        
        if(carry==0){
            if(ptr1==NULL && ptr2==NULL){
                return head->next;
            }
            while(ptr1!=NULL){
                ptr->next=ptr1;
                ptr1=ptr1->next;
                ptr=ptr->next;
            }
            while(ptr2!=NULL){
                ptr->next=ptr2;
                ptr2=ptr2->next;
                ptr=ptr->next;
            }
            // return head->next;
        }
        else{
            if(ptr1==NULL && ptr2==NULL){
                ListNode* newPtr=new ListNode(1);
                ptr->next=newPtr;
                ptr=ptr->next;
                return head->next;
            }
            if(ptr1!=NULL){
                // ptr1->val++;
                while(ptr1!=NULL){
                if(carry==1){
                    ptr1->val++;
                    if(ptr1->val>=10){
                        carry=1;
                        ptr1->val%=10;
                    }
                    else{
                        carry=0;
                    }
                }
                
                ptr->next=ptr1;
                ptr1=ptr1->next;
                ptr=ptr->next;
                }
                if(carry==1){
                    ListNode* newNode=new ListNode(1);
                    ptr->next=newNode;
                    ptr=ptr->next;
                }
            }
            else if(ptr2!=NULL){
                while(ptr2!=NULL){
                    if(carry==1){
                    ptr2->val++;
                    if(ptr2->val>=10){
                        carry=1;
                        ptr2->val%=10;
                    }
                    else{
                        carry=0;
                    }
                }
                ptr->next=ptr2;
                ptr2=ptr2->next;
                ptr=ptr->next;
                }
                 if(carry==1){
                    ListNode* newNode=new ListNode(1);
                    ptr->next=newNode;
                    ptr=ptr->next;
                }
                // return head->next;
                
            }
        }
        
        return head->next;
        
        
    }
}; 