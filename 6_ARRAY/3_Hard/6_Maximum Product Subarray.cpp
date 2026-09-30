//! ================================================ Brute Approach ==================================================
class Solution {
  public:
    int maxProduct(vector<int> &arr) {
            int n = arr.size();
            int answer = arr[0];

            for (int i = 0; i < n; i++) {
                int product = 1;

                for (int j = i; j < n; j++) {
                    product = product * arr[j];

                    if (product > answer) {
                        answer = product;
                    }
                }
            }

            return answer;
        
    }
};

//! ========================================= Optimal approach =========================================================
class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int maxProduct = nums[0];
    int minProduct = nums[0];
    int answer = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        int x = nums[i];

        int a = x;
        int b = x * maxProduct;
        int c = x * minProduct;

        int newMax = max(a, max(b, c));
        int newMin = min(a, min(b, c));

        maxProduct = newMax;
        minProduct = newMin;

        answer = max(answer, maxProduct);
    }

    return answer;
    }
};
