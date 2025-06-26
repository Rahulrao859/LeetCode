class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        int sumA = 0;
        int sumB = 0;

        for(int a: aliceSizes) sumA += a;

        for(int b: bobSizes) sumB += b;

        int diff = (sumB - sumA)/2;

        unordered_set<int> bobSet(bobSizes.begin(),bobSizes.end());

        for(int a : aliceSizes){
           int b = a + diff;
           if(bobSet.count(b)){
              return{a,b};
           }
        }

        return {};
    }
};