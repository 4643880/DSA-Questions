int getPivot(vector<int>& arr, int size){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            // it means mid is there on Line number 1 of Graph
            start = mid + 1;            
        }else{
            // it means mid is there on Line number 2 of Graph but not doing mid -1 because if i do then mid will come at line 1 again
            end = mid;
        }
         mid = start + (end - start)/2;
    }
    return end; // can return start or end
}

int binarySearch(vector<int>& arr, int st, int ed, int key){
    int start = st;
    int end = ed;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(key == arr[mid]){            
            return mid;        
        }else if(key > arr[mid]){
            start = mid + 1;            
        }else{
            end = mid - 1;
        }
         mid = start + (end - start)/2;
    }
    return -1;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr,n);

    if(k >= arr[pivot] && k <= arr[n-1]){ // Binary Search on Line 2 of Graph
        return binarySearch(arr, pivot, n-1 ,k);
    }else{ // Binary Search on Line 1 of Graph
        return binarySearch(arr, 0, pivot-1 ,k);
    }
}












