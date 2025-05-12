class Solution {
public:
    int countEven(int num) {
        
        int count = 0;
        int sum = 0;

        for(int i = 1;i<=num;i++){

            int number = i;

            while(number != 0){
                int digit = number % 10;
                sum = sum + digit;
                number /= 10;
            }
              if(sum %2 == 0){
                    count++;
                }
                else{
                    sum = 0;
                }
            
        }
        return count;
    }
};