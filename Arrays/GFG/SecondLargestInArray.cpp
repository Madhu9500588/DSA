class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int largest = arr[0];
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]> largest)
               largest=arr[i];
        }
      
        
       int getSecondLargest = -1;
        for(int i=0; i<arr.size(); i++)
        {
            if (arr[i]> getSecondLargest && arr[i]!=largest)
              getSecondLargest=arr[i];
        }
        return getSecondLargest;
        
    }
    
};
