class Solution {
  public:
  void insertionsort(vector<int>&arr, int n){
      if(n==1) return;
      for(int i=0; i<n-1; i++){
          if(arr[i]>arr[i+1]){
              swap(arr[i],arr[i+1]);
              i--;
          }
      }
      insertionsort(arr,n-1);
  }
    void insertionSort(vector<int>& arr) {
        insertionsort(arr, arr.size());
    }
};