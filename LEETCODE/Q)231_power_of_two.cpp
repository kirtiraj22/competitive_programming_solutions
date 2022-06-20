class Solution {
public:
    bool isPowerOfTwo(int n) {
        //we will run a loop from 0 to 30 and find 2's power there
        //if we get a answer same as n then we will return true else we will continue the loop
        //after completion of loop if we dont get the ans = n then we return false
        for(int i = 0 ; i <= 30 ; i++){
            int ans = pow(2,i);
            
            if(ans == n){
                return true;
            }
        }
        return false;
    }
};
