//! ============================================== Brute Force ==============================================
Generate all permutations of the array using recursion and backtracking. 
Sort them lexicographically.
Find the current array in the sorted list. Return the permutation at the next index.
If current is the last permutation, return the first (wrap around using modulo).

TC = O(n! × n), Space = O(n!).

//! ============================================= Optimal Approach ===========================================
// 1. find the break point 
// 2. find someone greater than the break point number but smaller than other just slightly greater than the break point 
// 3. then try placing the remaining element in the array in the sorted order .

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int index= -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                index= i;
                break;
            }
        }
        if(index== -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i=n-1; i>index; i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        reverse(nums.begin()+1+index , nums.end());
        
    }
};