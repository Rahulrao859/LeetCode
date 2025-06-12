class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        
    int maxDiff = 0;
    int n = nums.size();

    // Traverse the array and calculate absolute difference between adjacent elements
    for (int i = 0; i < n; i++) {
        // Handle circular behavior
        int nextIndex = (i + 1) % n;  
        int diff = abs(nums[nextIndex] - nums[i]);
        maxDiff = max(maxDiff, diff);  // Update maxDiff if current difference is greater
    }

    return maxDiff;
    }
};