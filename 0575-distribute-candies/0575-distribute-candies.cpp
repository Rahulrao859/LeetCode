class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        // Use a set to count distinct candy types
    std::unordered_set<int> distinctCandies(candyType.begin(), candyType.end());
    
    // Number of candies Alice can eat is n / 2
    int maxEat = candyType.size() / 2;
    
    // The maximum distinct types Alice can eat is the minimum of n / 2 and the number of distinct types
    return std::min(static_cast<size_t>(maxEat), distinctCandies.size());  
    }
};