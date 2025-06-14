class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i = s.length()-1;

        int count = 0;
     
     // skip the trailing space
        while(i>= 0 && s[i] == ' '){
            i--;
        }

     // Count the length of the last word
        while(i>= 0 && s[i] != ' '){
            count++;
            i--;
        }

        return count;
    }
};