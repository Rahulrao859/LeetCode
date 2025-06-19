class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
         vector<int> even, odd;

        // Step 1: Separate even and odd indexed values
        for (int i = 0; i < nums.size(); ++i) {
            if (i % 2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }

        // Step 2: Sort even indices in ascending order, odd indices in descending
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end(), greater<int>());

        // Step 3: Rebuild the result
        int ei = 0, oi = 0;
        for (int i = 0; i < nums.size(); ++i) {
            nums[i] = (i % 2 == 0) ? even[ei++] : odd[oi++];
        }

        return nums;
    }  
    
};