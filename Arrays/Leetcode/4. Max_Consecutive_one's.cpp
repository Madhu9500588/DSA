//Given a binary array nums, return the maximum number of consecutive 1's in the array.

//Example 1:

//Input: nums = [1,1,0,1,1,1]
//Output: 3

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt =0;
        int maxi =0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                cnt++;
            }
            else
            {
                cnt =0;
            }

            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};
