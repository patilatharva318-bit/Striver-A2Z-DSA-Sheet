// brute opproach is hashmap 
//optimal opproach is xor 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int result=0;
        for(int i=0; i<n; i++){
            result= result^nums[i];
        return result;
    }
};
// xor all the element 4 xor 2 xor 2 xor 1 xor 1
// 4(2 xor 2) (1 xor 1)
// 4 xor 0 xor 0
// result will be 4 which is single in the array 
// this is the result 