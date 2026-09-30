// brute 
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n= arr.size();
        for(int i=1;i<=n+1;i++){//this loop is for the number 
            int flag=0;
            for(int j=0; j<n;j++){//this loop is for array given 
                if (arr[j]==i){
                    flag=1;//if both the number are same flag will be 1
                    break;
                }
            }
            if (flag==0){//when flag is 0 then the missing number is printed from first loop
                return i;
            }
        }
    }
};

//optimal   
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int xor1=0;
        int xor2=0;
        int n= arr.size();
        for (int i=0; i<n; i++){
        xor2= xor2^ arr[i];
        xor1= xor1^ (i+1);
        }
        xor1= xor1 ^ n+1;
        return xor1 ^ xor2;
    }
};