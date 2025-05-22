class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        unordered_map<int,int> count;
        
        // count the frequency of each number
        for(int num:nums){
            count[num]++;
        }

        // Repeat the doubling process
        while (count.find(original) != count.end()) {
            original *= 2;
        }
        return original;
    }
};