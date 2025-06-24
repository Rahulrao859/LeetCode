class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
          set<int> result; // Use set to avoid duplicates and maintain sorted order

    for (int j = 0; j < nums.size(); ++j) {
        if (nums[j] == key) {
            // Add all i in range [j - k, j + k]
            for (int i = max(0, j - k); i <= min((int)nums.size() - 1, j + k); ++i) {
                result.insert(i);
            }
        }
    }

    // Convert set to vector
    return vector<int>(result.begin(), result.end());
}

};