//Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
//Note: You need to solve this problem without utilizing the built-in sort function.

//Examples:

//Input: arr[] = [0, 1, 2, 0, 1, 2]
//Output: [0, 0, 1, 1, 2, 2]
//Explanation: 0s, 1s and 2s are segregated into ascending order.


class Solution {
  public:
    void sort012(vector<int>& arr) {
               int count[3] = {0, 0, 0};

               // Count 0s, 1s and 2s
               for (int i = 0; i < arr.size(); i++) {
                   count[arr[i]]++;
               }

               // Put 0s, 1s and 2s back into the array
               int index = 0;

               for (int key = 0; key <= 2; key++) {
                   for (int j = 0; j < count[key]; j++) {
                       arr[index] = key;
                       index++;
                   }
               }
           }
       };
        
