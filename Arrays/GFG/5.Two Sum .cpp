//Given an array arr[] and an integer target, return the pair of elements whose sum equals target. An element cannot be used twice unless it appears multiple times in the array.

//Note:  If no pair exist, return an empty array.

//Examples:

//Input: arr[] = [2, 9, 10, 4, 15], target = 12
//Output: [2, 10]
//Explanation: Pair with sum equal to 12 is (2, 10).

//1st solution is Brute force( BIG O{n^2)})
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }

        return {};
    }
};


//2. Better Solution
//Hashing Technique

class Solution {
public:
    vector<int> twoSum(vector<int> &arr, int target) {

        unordered_set<int> seen;

        for(int i = 0; i < arr.size(); i++)
        {
            int needed = target - arr[i];

            if(seen.find(needed) != seen.end())
            {
                return {needed, arr[i]};
            }

            seen.insert(arr[i]);
        }

        return {};
    }
};
