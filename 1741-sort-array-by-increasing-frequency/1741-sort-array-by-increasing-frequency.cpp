class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int> freq;

        for(int num:nums){
            freq[num]++;
        }

       // Step 2: Sort the numbers based on frequency and value
       sort(nums.begin(), nums.end(), [&freq](int a, int b){
       // If frequencies are different, compare them
        if (freq[a] != freq[b]) {
            return freq[a] < freq[b];
        }
        // If frequencies are the same, compare by value in descending order
        return a > b;
    });
   
   return nums;

    }
};