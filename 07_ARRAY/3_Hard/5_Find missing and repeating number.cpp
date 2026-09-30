//!========================================= Better Appraoch ===================================================
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
            int repeating = -1, missing = -1;
            unordered_map<int,int>mpp;
            for(int i=0; i<n;i++){
                mpp[arr[i]]++;
            }
            for(int i=0; i<=n; i++){
                if(mpp[i]==2)
                repeating= i;
                if(mpp[i]==0)
                missing= i;
            }
        return {repeating,missing};
    }
};


//! =================================================== Optimal Approach ==========================================
