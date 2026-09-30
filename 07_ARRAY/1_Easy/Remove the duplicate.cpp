class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        int n= arr.size();
        int i=0;
        for (int j=0; j<n; j++){
            if (arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
        }
        
    }
    return vector<int>
    (arr.begin() , arr.begin()+i+1);
    }
};