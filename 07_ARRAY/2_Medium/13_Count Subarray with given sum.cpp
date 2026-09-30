//! =========================================== brute force ====================================================
class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        int n= arr.size();
        int count=0;
        for(int i=0; i<n; i++){
            int sum=0;
            for (int j=i; j<n; j++){
                sum += arr[j];
                if (sum==k){
                count++;
                }
            }
        }
        return count;
    }
};

//! ======================================= Optimal Approach ===================================================
// for understanding please watch striver count subarray with sum k optimal approach 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int> map;
        map[0]=1;
        int prefixsum= 0;
        int count=0;
        for (int i=0; i<n; i++){
            prefixsum += nums[i];
            int remove = prefixsum-k;
            count+= map[remove];
            map[prefixsum] += 1;

        }
        return count;
        
    }
};