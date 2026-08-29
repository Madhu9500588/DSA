//You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element.

//Examples:

//Input: arr[] = [1, 2, 3, 5]
//Output: 4
//Explanation: All the numbers from 1 to 5 are present except 4.

class Solution {
  public:
    int missingNum(vector<int>& arr) {
      
       int n= arr.size()+1;
       
       int Sum=0;
       for(int i=0; i<n-1; i++)
       {
           Sum+=arr[i];
       }
       
       long long expSum = (n *1LL* (n + 1)) / 2;  
        
       return expSum - Sum;
    }
};
