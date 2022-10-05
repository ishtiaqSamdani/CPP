#include<bits/stdc++.h>
using namespace std;
vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>nums.size()/3){
                ans.push_back(i.first);
            }
        }
        return ans;
        
}
int main()
{
    vector<int> ve={3,2,3};

    return 0;
}