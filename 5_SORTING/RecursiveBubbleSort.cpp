class Solution {
  public:
  void bubblesortrecursion(vector<int>&arr, int n){
      if(n==1) return;
      for(int i=0; i<n-1; i++){
          if(arr[i]>arr[i+1]){
              swap(arr[i],arr[i+1]);
          }
      }
        bubblesortrecursion(arr, n-1);
  }
    void bubbleSort(vector<int>& arr) {
        bubblesortrecursion(arr,arr.size());
    }
};
