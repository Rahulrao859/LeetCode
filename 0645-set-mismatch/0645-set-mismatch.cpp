class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();

        int missing = -1;
        int duplicate = -1;

        unordered_map<int,int> mp;

        // check for the occurence of each number
        for(int num:nums){
            mp[num]++;
        }
       
       // check for the missing and the duplicate number from 1 to n
       for(int i = 1;i<=n;i++){
        if(mp[i] == 2){
            duplicate = i;
        }
        else if(mp[i] == 0){
            missing = i;
         }
       }

       return {duplicate,missing};

    }
};