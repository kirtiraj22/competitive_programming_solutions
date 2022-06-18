class Solution {
public:
    int reverse(int x) {
        
        int ans = 0;
        while(x!=0){
            int rem;
            rem = x % 10;
            
            if(ans > (INT_MAX / 10) || ans < (INT_MIN / 10)){       //this is done so that answers range is maintained
                return 0;
            }
            
            ans = (ans * 10) + rem;
            x = x / 10;
        }
        return ans;
    }
};

