class Solution {
public:
    int firstUniqChar(string s) {
           unordered_map<char, int> freqMap;
    
    // Step 1: Count the frequency of each character
    for (char c : s) {
        freqMap[c]++;
    }
    
    // Step 2: Find the first character with frequency 1
    for (int i = 0; i < s.size(); ++i) {
        if (freqMap[s[i]] == 1) {
            return i;
        }
    }
    
    // If no unique character is found, return -1
    return -1;
    }
};