//! ================================================ Brute Approach ==================================================
class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        int count;
        int n= arr.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]>arr[j]){
                    count++;
                }
            }
        }
        return count;
    }
};

//! ========================================= Optimal approach =========================================================
class Solution {
  public:
   int count =0;
   void merge(vector<int> &arr, int low , int mid, int high){
              using namespace std;
              vector<int> temp;
             int left= low;
             int right= mid+1;
              while(left<=mid && right<=high){
                  if(arr[left]<=arr[right]) {
                      temp.push_back(arr[ left]);
                      left++ ;
                  }
                  else{
                      temp.push_back(arr[right]);
                      count += (mid-left+1);
                      right++ ;
                  }
              }
              while (left<= mid){
                  temp.push_back(arr[left]);
                  left++ ;
              }
              while (right<= high){
                  temp.push_back(arr[right]);
                  right++ ;
              }
              for(int i=low; i<=high; i++){
                  arr[i]= temp[i-low];
              }
          }
          void mergeSort(vector<int> &arr, int low, int high) {
              if(low>=high) return;
              int mid= (low+high) / 2;
              mergeSort (arr, low,mid);
              mergeSort (arr, mid+1, high);
              merge(arr, low , mid , high);
          }
    int inversionCount(vector<int> &arr) {
        int n= arr.size();
        mergeSort(arr,0,n-1);
        return count;
        
    }
};