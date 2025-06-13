class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
     // Create a hash map to store the frequency of characters in the magazine
      unordered_map<char, int> magazineFreq;
    
    // Count the frequency of each character in the magazine
    for (char ch : magazine) {
        magazineFreq[ch]++;
    }
    
    // Check if each character in the ransomNote can be constructed from the magazine
    for (char ch : ransomNote) {
        if (magazineFreq[ch] > 0) {
            magazineFreq[ch]--;  // Use one occurrence of the character
        } else {
            return false;  // If there's not enough characters in the magazine
        }
    }
    
    return true;  // All characters in the ransomNote can be formed 
    }
};