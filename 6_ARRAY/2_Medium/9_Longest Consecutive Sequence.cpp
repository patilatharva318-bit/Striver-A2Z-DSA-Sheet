// ! =============================================== Brute Force =======================================================
// 1. it will loop in the array and will check the element+1 exist in the array or not 
// 2. if exist it will be stored in the longest variable 
// 3. longest variable wil bge returned 
// in the while statement !arr.end() means that it has completed the loop and will tell us the element is found or not 
class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        int n= arr.size();
        int longest=0;
        for(int i=0; i<n; i++){
            int current= arr[i];
            int count= 1;
            while(find(arr.begin(), arr.end(),current+1)!=arr.end()){
                current++;
                count++;
            }
            longest=max(longest,count);
        }
        return longest;
    }
};

//! ========================================== Better Force ===========================================================
// 1. it will sort the array 
// 2. LastSmallest will check that the current element previous number exist in the array or not 
// 3. if it exist then the sequence will be continue if not then sequence will restart 
// 4. if the current element is 100 it will check the previous element existence in the array like number 99.
class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        int n=arr.size();
        if(n==0) return 0;
        sort(arr.begin(),arr.end());
        int longest=1;
        int LastSmallest=INT_MIN;
        int count=0;
        for(int i=0; i<n; i++){
            if(arr[i]-1==LastSmallest){
                count+=1;
                LastSmallest= arr[i];
            }
            else if(arr[i]!=LastSmallest){
                count=1;
                LastSmallest=arr[i];
            }
            longest= max(longest,count);
        }
        return longest;
        
    }
};

//! ==================================== Optimal Force ======================================================================
// 1. insert the array in the set it will remove the duplicate element in the array.
// 2. then it will find the current element previous number if exist then it will keep loopking for previous element and at the end it will mark the last element as the starting point of the sequence.
// 3. it will update the longest variable
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) return 0; 
    
        int longest = 1; 
        unordered_set<int> st;
    
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }
    
        for (auto it : st) {
            if (st.find(it - 1) == st.end()) {
                int cnt = 1;
                int x = it; 

                while (st.find(x + 1) != st.end()) {
                    x = x + 1; 
                    cnt = cnt + 1; 
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};