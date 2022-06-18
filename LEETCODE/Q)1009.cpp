class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        
        if(n == 0)
            return 1;
        
        while (m!=0){
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        
        return ans;
    }
};

/*EXPLANATION : if we have n =5  then binary representation = 000000000....101
so we put m = n  so now m will also have same value as n
now we declare an int mask = 0 whose binary representation is 000000000....000
*/

/*WHILE LOOP:
 now while loop will run until m's value is 0
 and we will left shift mask and use OR operator with it so it will become 00000000......001
 and simultaneously we will right shift m so now m will be 000000......010 */

/*FINAL ANSWER
we will take nagation of n i.e if n = 00000000....101  then ~n = 111111........010
and then we will use and operator with n and mask so that we will get final answer*/
