class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int TotalSum = 0;
        int SingleSum = 0;
        int DoubleSum = 0;

        for(int num:nums){
            TotalSum += num;
            if(num < 10){
                SingleSum += num;
            }
            else if (num<100){
                DoubleSum += num;
            }
        }

        return (SingleSum > TotalSum-SingleSum || DoubleSum > TotalSum - DoubleSum);
    }
};