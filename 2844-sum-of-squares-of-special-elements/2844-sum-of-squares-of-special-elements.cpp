class Solution {
public:
    int sumOfSquares(vector<int>& nums) {

       long long sum = 0;
       int n = nums.size();

       for(int i = 1;i<=n;i++){
          if(n%i == 0){
            int sq = nums[i-1] * nums[i-1];
            sum = sum + sq;
          }
       } 
       return sum;
    }
};