class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low<high){
            int pIndex = partition(arr, low, high);
            quickSort (arr, low, pIndex -1);
            quickSort (arr, pIndex+1, high);
        }
        
    }

    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = low-1 ;
        for(int j= low; j<high; j++){
            if(arr[j]<=pivot){
                i++;
                swap (arr[i],arr[j]);
            }
        }
        swap (arr[i+1] , arr[high]);
        return i+1;
    }
    vector<int> qs (vector<int> arr){
        quickSort(arr , 0 , arr.size()-1);
        return arr;
    }
};