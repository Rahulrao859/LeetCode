class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       unordered_map<int, int> basket;  // To store fruit types and their counts
    int left = 0, maxFruits = 0;

    for (int right = 0; right < fruits.size(); ++right) {
        basket[fruits[right]]++;  // Add current fruit to the basket

        // If we have more than 2 types of fruits, shrink the window from the left
        while (basket.size() > 2) {
            basket[fruits[left]]--;
            if (basket[fruits[left]] == 0) {
                basket.erase(fruits[left]);  // Remove fruit type when count is 0
            }
            left++;  // Move the window to the right
        }

        // Update max fruits collected
        maxFruits = max(maxFruits, right - left + 1);
    }

    return maxFruits;  
    }
};