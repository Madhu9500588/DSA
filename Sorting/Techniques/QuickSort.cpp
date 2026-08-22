class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        
        if(low<high)
        {
            int partitionIndex = partition(arr, low, high);
           
            quickSort(arr, low, partitionIndex-1);
            quickSort(arr,partitionIndex +1 , high);
        }
        
    }

    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;
        
        while(i<j)
        {
            while(arr[i] <= pivot && i<=high)
            {
                i++;
            }
            
            while(arr[j]> pivot&& j>=low)
            {
                j--;
            }
        
           if(i<j)
           {
              int temp = arr[i];
              arr[i]= arr[j];
              arr[j]= temp;
           }
        
        }
        int temp = arr[low];
        arr[low] = arr[j];
        arr[j] = temp;
          return j;
    }
  
};
