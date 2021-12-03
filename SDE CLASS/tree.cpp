#include<bits/stdc++.h>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* left=NULL;
    Node* right=NULL;

    Node(int k){
        data=k;
    }
};

void disp(Node* head){
    
    disp(head->left);
}

main(){

    Node *head= new Node(10);
    head->left=new Node(20);
    head->right=new Node(30);

}