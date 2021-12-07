long long giveMeSum(ListNode* ptr){
        if(ptr->next==NULL){
            return ptr->val;
        }
        return giveMeSum(ptr->next)*10+ptr->val;
    }