class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() -1;
        int mid = start + (end-start)/2;
        
        // HINT: key > arr[mid] 
        // HINT: Suppose key = arr[mid + 1];
        // HINT: if(key > arr[mid]){ start = mid + 1}
        // HINT: if(key < arr[mid]){ end = mid - 1}
        // NOTE: while(start < end) will not use <=
        while(start < end){
            if(arr[mid] < arr[mid + 1]){ // firstIndex < secondIndex
                start = mid + 1;
            }else{
                end = mid;
            }
            mid = start + (end-start)/2;
        } 
        return start;

    }
};