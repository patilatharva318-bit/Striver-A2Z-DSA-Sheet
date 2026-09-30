//! ============================================ Brute Force =======================================================
class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n= arr.size();
        int target = int (n/3);
        unordered_map<int,int> mpp;
        for(auto it: arr){
            mpp[it]++ ;
        }
        vector<int> result;
        for(auto it:mpp){
            if(it.second > target){
                result.push_back(it.first);
            }
        }
         sort(result.begin(),result.end());
        return result;
    }
};

//! ====================================== Optimal Approach ==============================================================
// done with the moore vote approach 
// for the better understanding please visit the striver mejority element 1 video not the second one because done with the same approach but with some modification
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        int count1 = 0;
        int count2 = 0;
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        for(int i=0; i<n; i++){
            if(count1 == 0 && ele2!= nums[i]){
                count1 = 1;
                ele1 = nums[i];
            }
            else if (count2 == 0 && ele1!= nums[i]){
                count2 = 1;
                ele2 = nums[i];
            }
            else if(nums[i] == ele1) count1++;
            else if(nums[i] == ele2) count2++;
            else {
                count1--;
                count2--;
            }
        }
       vector<int> ls;
       count1 = 0;
       count2 = 0;
       for (int i=0; i<n; i++){
        if (ele1 == nums[i]) count1++;
        else if (ele2 == nums[i]) count2++;
       } 
       int mini =(int) (n/3);
       if (count1 > mini) ls.push_back(ele1);
       if (count2 > mini) ls.push_back(ele2);
       sort(ls.begin(), ls.end());
       return ls;
    }
};