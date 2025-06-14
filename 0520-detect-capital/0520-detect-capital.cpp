class Solution {
public:
    bool detectCapitalUse(string word) {
          int n = word.length();
    
    // Case 1: All letters are uppercase
    bool allUpper = true;
    // Case 2: All letters are lowercase
    bool allLower = true;
    // Case 3: Only first letter is uppercase
    bool firstUpperRestLower = (isupper(word[0]) && std::all_of(word.begin() + 1, word.end(), ::islower));

    for (int i = 0; i < n; i++) {
        if (isupper(word[i])) {
            allLower = false;
        } else {
            allUpper = false;
        }
    }

    return allUpper || allLower || firstUpperRestLower; 
    }
};