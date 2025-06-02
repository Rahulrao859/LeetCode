class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
         // Initialize frequency arrays for word1 and word2 (26 letters of the alphabet)
    vector<int> freq1(26, 0);  // Frequency array for word1
    vector<int> freq2(26, 0);  // Frequency array for word2
    
    // Count the frequency of each letter in word1
    for (char ch : word1) {
        freq1[ch - 'a']++;
    }
    
    // Count the frequency of each letter in word2
    for (char ch : word2) {
        freq2[ch - 'a']++;
    }
    
    // Check the difference in frequencies for each letter
    for (int i = 0; i < 26; ++i) {
        if (abs(freq1[i] - freq2[i]) > 3) {
            return false;
        }
    }
    
    return true;
    }
};