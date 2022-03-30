// https://leetcode.com/problems/sort-colors/

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        vector<int> freq(3, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
            freq[nums[i]]++;
        }
        int k = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < freq[i]; j++)
            {
                nums[k] = i;
                k++;
            }
        }
    }
};