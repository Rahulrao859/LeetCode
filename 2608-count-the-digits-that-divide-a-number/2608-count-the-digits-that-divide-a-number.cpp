class Solution {
public:
    int countDigits(int num) {
      
      int count = 0;

      int number  = num;

      while(number != 0){
         int val = number % 10;
         if(val != 0  && num % val == 0){
            count++;
         }
         number /=10;
      }  
      return count;
    }
};