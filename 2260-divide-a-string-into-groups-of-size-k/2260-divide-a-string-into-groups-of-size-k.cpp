class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        std::vector<std::string> result;
    int n = s.size();
    
    // Iterate over the string in steps of size k
    for (int i = 0; i < n; i += k) {
        // Create a substring of size k, starting from index i
        std::string group = s.substr(i, k);
        
        // If the group is smaller than k, fill the remaining characters
        if (group.size() < k) {
            group.append(k - group.size(), fill);
        }
        
        // Add the group to the result vector
        result.push_back(group);
    }

    return result; 
    }
};