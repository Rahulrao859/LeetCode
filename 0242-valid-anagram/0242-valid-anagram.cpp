class Solution {
public:
    bool isAnagram(string s, string t) {

       // If the lengths are not the same, they cannot be anagrams
        if(s.length() != t.length()){
            return false;
        }
        
        // Frequency map for counting characters
        unordered_map<char,int> mp;
       
        // Increment for each character in s
        for(char ch: s){
            mp[ch]++;
        }

        // Decrement for each character in t
        for(char c : t){

             if(mp.find(c) == mp.end()){
                return false;   // If t contains a character not in s
            }

            mp[c]--;
            if(mp[c] < 0){
                return false; // If t contains more of a character than s
            }
        }
       return true; // All checks passed, t is an anagram of s
        
    }
};