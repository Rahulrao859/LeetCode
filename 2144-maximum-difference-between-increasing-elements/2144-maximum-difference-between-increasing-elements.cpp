class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int maxDiff = 0;
        int diff = 0;

        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
               if(i<j && nums[i]<nums[j]){
                diff = nums[j] - nums[i];
                maxDiff = max(diff,maxDiff);
               }
            }
        }
        return maxDiff == 0 ? -1 : maxDiff;  // Return -1 if no valid pair is found
    }
};