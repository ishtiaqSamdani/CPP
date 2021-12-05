// https://leetcode.com/problems/happy-number/

//google question

//using fast and slow pointer

// slow and fast pointer meet each other at some point therefore like in linked list
//  containing cycle  

// eg: 

// n=5;


// 5->25->29->85->89->145->42->20->4->16->37->58->  |
//               |<---------------------------------|



class Solution {
public:
    
    int FindSq(int n){
        int sum=0;
        
        while(n){
            int r=n%10;
            sum=sum+r*r;
            n=n/10;
        }
        
        return sum;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        
        do{
            slow=FindSq(slow);
            fast=FindSq(FindSq(fast));
        }while(slow!=fast);
        
        if(slow==1){
            return true;
        }
        return false;
    }
};