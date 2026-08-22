class Solution {
  public:
    void mergeSort(vector<int>& arr, int l, int r) {
       if(l<r)
       {
           int q= (l+r)/2;
       
       mergeSort( arr, l,  q);
       mergeSort( arr, q+1, r);
       merge(arr, l, q, r);
     }
    } 
    
    void merge(vector<int>& arr, int l, int q, int r)
    {
        int n1  = q - l+1;
        int n2 = r-q;
        
        int L[n1], R[n2];
        
        
        for(int i=0; i<n1; i++)
        {
            L[i]= arr[l+i];
        }
        
        
        for(int j =0; j<n2 ; j++)
        {
            R[j] = arr[q+1+j];
        }
        
        int i=0;
        int j=0;
        int k=l;
        
        while(i<n1 && j<n2)
        {
            if(L[i] <= R[j])
            {
                arr[k] = L[i];
                i=i+1;
            }
            
            else
            {
                arr[k] = R[j];
                j=j+1;
            }
            
            k=k+1;
        }
        
        while(i<n1)
        {
            arr[k] = L[i];
            i=i+1;
            k=k+1;
        }
        
        while(j<n2)
        {
            arr[k] = R[j];
            j=j+1;
            k=k+1;
        }
        
        
    }
};
