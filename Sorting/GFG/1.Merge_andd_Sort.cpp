//Input: arr1[] = [11, 1, 8], arr2[] = [10, 11]
//Output: [1, 8, 10, 11]
//Explanation: The ouput array after merging both the arrays and removing duplicates is [1, 8, 10, 11]

class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());

        vector<int> arr3;

        int i = 0;
        int j = 0;

        while(i < arr1.size() && j < arr2.size())
        {
            int value;

            if(arr1[i] < arr2[j])
            {
                value = arr1[i];
                i++;
            }
            else if(arr2[j] < arr1[i])
            {
                value = arr2[j];
                j++;
            }
            else
            {
                value = arr1[i];
                i++;
                j++;
            }

            if(arr3.empty() || arr3.back() != value)
            {
                arr3.push_back(value);
            }
        }

        while(i < arr1.size())
        {
            if(arr3.empty() || arr3.back() != arr1[i])
                arr3.push_back(arr1[i]);

            i++;
        }

        while(j < arr2.size())
        {
            if(arr3.empty() || arr3.back() != arr2[j])
                arr3.push_back(arr2[j]);

            j++;
        }

        return arr3;
    }
};
