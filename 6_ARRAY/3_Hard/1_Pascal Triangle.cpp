// you can get three type of question in this case for the pascal triangle 
// 1. you will be given R and C tell me the element at that place 
// 2. Print any nth row of the pascal triangle 
// 3. print the entire pascal triangle 

//! 1. formula for the question to get the element at the place will be
//  ncr= n! / r! * (n-r)!

/* int ncr(int n, int r)
long long res =1;
for (int i=0; i<r; i++){
res = res (n-i);
res = res / (i+1);
}
return ans; 
}     */

//! 2. formula for the second question will be 
// (r-1)c (c-1)

/* for(int i=1; i<n; i++){
ans= ans * (n-1);
ans= ans / (i);
print (ans);
}         */


//! Main question 
class Solution {
public:
    vector<int> generateRow(int numRows) {
        long long ans = 1;
        vector<int> ansrow;
        ansrow.push_back(1);
        for (int col = 1; col < numRows; col++) {
            ans = ans * (numRows - col);
            ans = ans / (col);
            ansrow.push_back(ans);
        }
        return ansrow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};