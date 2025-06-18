class Solution {
public:
    int titleToNumber(string columnTitle) {
     int result = 0;
    
    // Iterate over the string and calculate the column number
    for (char c : columnTitle) {
        result = result * 26 + (c - 'A' + 1);
    }
    
    return result;
    }
};