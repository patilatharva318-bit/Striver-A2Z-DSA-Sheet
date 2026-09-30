class Solution{	
	public:
		long long int factorial(int n){
			//your code goes here
            long long result= 1;
            for(int i=1; i<=n; i++){
                result *=i;
            }
            return result;
		}
};