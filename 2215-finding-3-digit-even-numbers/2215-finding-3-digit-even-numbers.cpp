class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
          // Set to store unique integers
    set<int> uniqueIntegers;
    
    // Step 1: Generate all possible 3-digit numbers using permutations
    for (int i = 0; i < digits.size(); ++i) {
        for (int j = 0; j < digits.size(); ++j) {
            for (int k = 0; k < digits.size(); ++k) {
                // Skip if any digit is used more than once
                if (i == j || j == k || i == k) {
                    continue;
                }

                // Form the number by concatenating digits[i], digits[j], digits[k]
                int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                
                // Step 2: Check if the number has no leading zero and is even
                if (num % 2 == 0 && digits[i] != 0) {
                    uniqueIntegers.insert(num);
                }
            }
        }
    }
    
    // Step 3: Convert set to vector and return sorted result
    vector<int> result(uniqueIntegers.begin(), uniqueIntegers.end());
    return result;
    }
};