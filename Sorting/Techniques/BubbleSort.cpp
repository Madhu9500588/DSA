class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
       for(int i = arr.size()-1 ; i>=1 ; i--)
       {
           for(int j=0 ; j<i ; j++)
           {
               if(arr[j] > arr[j+1])
               {
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1]=temp;
               }
               
           }
       }
        
    }
};
