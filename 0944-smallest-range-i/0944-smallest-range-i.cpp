class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
     // Find the minimum and maximum elements in the array
    int minVal = *min_element(nums.begin(), nums.end());
    int maxVal = *max_element(nums.begin(), nums.end());
    
    // Calculate the minimized score
    int minimizedScore = max(0, (maxVal - minVal) - 2 * k);
    
    return minimizedScore;
    }
};