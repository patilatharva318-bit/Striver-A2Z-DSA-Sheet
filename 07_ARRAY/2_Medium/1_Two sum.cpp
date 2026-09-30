// This approach is brute 
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n= arr.size();
        for(int i=0; i<=n-1; i++){
            for(int j=i+1; j<=n-1; j++){
                if(arr[i]+arr[j]==target)
                return true;
            }
        }
        return false;
    }
};

// optimal approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(target - nums[i]) > 0) {
                return {mp[target - nums[i]], i};
            }
            mp[nums[i]] = i;
        }
        return {-1, -1};
    }
};
// in this i used hashmap. first it will check the target-arr[i]
// then after the result it will check the answer of the formula is in the hashmap 
// if yes then it will return the result 
// first it will check the result because if do not do this it will return the value that it is subtracting in arr[i].
