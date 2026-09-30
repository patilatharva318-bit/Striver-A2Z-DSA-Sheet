class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> result(n, 0);  

        for (int i = 0; i < n; i++) {
            int num = arr[i];
            if (num >= 1 && num <= n) {
                result[num - 1]++;  
            }
        }

        return result;
    }
};