class Solution {
public:
    bool checkString(string s) {
        bool seenB = false;

        for(char ch:s){
            if(ch == 'b'){
                seenB = true;// Once we encounter 'b', mark the flag
            }
            else if(ch == 'a' && seenB){
                return false;  // If we encounter 'a' after 'b', return false
            }
        }
        return true; // Return true if no 'a' appears after a 'b'
    }
};