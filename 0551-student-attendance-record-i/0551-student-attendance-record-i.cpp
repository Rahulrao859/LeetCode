class Solution {
public:
    bool checkRecord(string s) {
        
        int StrCountA = 0;
        int StrCountL = 0;

        for(int i = 0;i<s.length();i++){
            
            // check for occurence of A
            if(s[i] == 'A'){
                StrCountA++;
                if(StrCountA >= 2) return false;
            }
            // check for occurence of L
            if(s[i] == 'L'){
               StrCountL++;
               if(StrCountL >= 3) return false;
            }
            else{
                StrCountL = 0;
               }
        }

        return true;
    }
};