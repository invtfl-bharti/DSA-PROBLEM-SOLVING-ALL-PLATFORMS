class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>arr;
        // Started from arr2 to ensure that the elements in arr are inserted
        // in the correct order as arr2 elements
        for(int i = 0; i < arr2.size(); i++) {
            for(int j = 0; j < arr1.size(); j++) {
                // if the elements are equal mark it as -1 and push back the element
                // to arr 
                if(arr1[j] == arr2[i]) {
                    arr.push_back(arr1[j]);
                    arr1[j] = -1;
                }
            }
        }
        // sort the arr1 array
        sort(arr1.begin(),arr1.end());
        for(int i = 0; i < arr1.size(); i++) {
            // if the arr1 elements is marked as -1 then insert the element in arr
            // in sorted format
            if(arr1[i] != -1) {
                    arr.push_back(arr1[i]);
            }
            
        }
        // return the arr vector
        return arr;
    }
};
