// ! ====================================== Optimal Approach ==================================================
// pointer i will loop back from the arr[n-2]
// arr[n-1] already leader hoga 
// arr[n-1] max value me store hojayega jbb i loop piche jayga wo compare krega max value se 
// if max<arr[i] then max value me arr[i] hojaeyga aur previous value leader me print hojayega
// reverse krega leader array ko 
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int n= arr.size();
        int max= arr[n-1];
        vector<int> leaders;
        for(int i=n-2 ; i>=0; i--){
            if(arr[i]>=max){
                max= arr[i];
                leaders.push_back(arr[i]);
            }
        }
        reverse(leaders.begin(),leaders.end());
        leaders.push_back(arr[n-1]);
        
        return leaders;
    }
};
