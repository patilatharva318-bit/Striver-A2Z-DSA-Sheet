class Solution {
  public:
    void generate(vector<int> &nums , int sum , int index , int n , vector<int> &result){
        if(index == n){
            result.push_back(sum);
            return;
        }    
        
        sum += nums[index];
        generate(nums , sum , index + 1 , n , result);
        
        sum -= nums[index];
        generate(nums , sum , index + 1 , n , result);
    }
    
    vector<int> subsetSums(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        int index = 0;
        int sum = 0;
        
        generate(nums , sum , index , n , result);
        
        return result;
    }
};