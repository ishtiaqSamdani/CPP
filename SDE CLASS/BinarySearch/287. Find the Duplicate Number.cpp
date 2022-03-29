// https://leetcode.com/problems/find-the-duplicate-number/

// first sort them and find number according to index

class Solution
{

private:
    int binaryS(vector<int> nums)
    {
        int l = 0;
        int r = nums.size() - 1;
        // 2
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (mid == r)
            {
                return nums[mid];
            }
            if (nums[mid] == mid)
            {
                r = mid;
            }
            else if (nums[mid] > mid)
            {
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        return -1;
    }

public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i] << " ";
        }
        return binaryS(nums);
        // return -1;
    }
};