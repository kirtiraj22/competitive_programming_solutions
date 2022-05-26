/*approach: take n and right shift it using right shift operator(>>) until we get zero i.e n=0. now check if the number is one using & operator.as we know that 1&1 = 1 so we can do n&1 and if we get 1 then we will just increase the count by 1*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0){
            
            if(n&1)
                count++;
            
            n = n >> 1;
            
        }
        return count;
    }
};
