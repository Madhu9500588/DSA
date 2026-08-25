//Given an array arr, rotate the array by one position in clockwise direction.
//Examples:

//Input: arr[] = [1, 2, 3, 4, 5]
//Output: [5, 1, 2, 3, 4]

class Solution {
  public:
    void rotate(vector<int> &arr) {
        
       int n = arr.size();
       int temp = arr[n-1];
       {
           for(int i =n-1; i>0; i--)
           {
               arr[i] = arr[i-1];
           }
           
           arr[0] = temp;
           
       }
    }
};
