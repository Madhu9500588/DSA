//Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

//Example 1:

//Input: nums = [1,2,3,4,5,6,7], k = 3
//Output: [5,6,7,1,2,3,4]
  
  
  class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        k = k % n;

        vector<int> temp;

        // Store last k elements
        for(int i = n - k; i < n; i++)
        {
            temp.push_back(nums[i]);
        }

        // Shift remaining elements to the right
        for(int i = n - k - 1; i >= 0; i--)
        {
            nums[i + k] = nums[i];
        }

        // Put temp at the beginning
        for(int i = 0; i < k; i++)
        {
            nums[i] = temp[i];
        }
    }
};
