//better 
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int maxcount=0;
        for (int i=0; i<n; i++){
            if(nums[i]==1){
                count+=1;
            }
            if(nums[i]==0){
                count=0;
            }
            if(maxcount<count){
                maxcount=count;
            }
        }
        return maxcount;

    }

// optimal 
int count = 0, maxCount = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }

    return maxCount;
}