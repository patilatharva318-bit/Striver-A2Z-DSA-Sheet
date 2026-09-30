//! ============================ Brute Approach ================================
class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        int n = arr.size();
               set<vector<int>> st;
               sort(arr.begin(), arr.end());

               for (int i = 0; i < n; i++) {
                   for (int j = i + 1; j < n; j++) {
                       for (int k = j + 1; k < n; k++) {
                           for (int l = k+1; l<n; l++) {
                           int sum = arr[i] + arr[j] + arr[k] + arr[l];
                           if (sum == target) {
                               vector<int> quadrable = {arr[i], arr[j], arr[k], arr[l]};
                               st.insert(quadrable);
                           }
                       }
                   }
               }
            }
               vector<vector<int>> ans(st.begin(), st.end());
               return ans;
    }
};

//! ====================== Optimal Approach ===============================
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
    if(i>0 && nums[i]==nums[i-1]) continue;   
    for(int j=i+1; j<n; j++){
        if(j>i+1 && nums[j]==nums[j-1]) continue;  
        int left= j+1;
        int right= n-1;
        while(left<right){
            long sum = (long)nums[i]+nums[j]+nums[left]+nums[right]; 
            if(sum<target){
                left++;
            }
            else if(sum>target){
                right--;
            }
            else{
                ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                left++;
                right--;
                while(left<right && nums[left]==nums[left-1]) left++;
                while(left<right && nums[right]==nums[right+1]) right--;
            }
        }
    }
}
        return ans;
    }
};