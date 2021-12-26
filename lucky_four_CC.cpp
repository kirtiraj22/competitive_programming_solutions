#include <iostream>

using namespace std;

int main()
{
        int T;
        cin >> T;
        while(T--){
            int count = 0;
            int num;
            int rem = 0;
            cin >> num;
            while(num!=0){
                rem = num%10;
                num = num/10;
                if(rem == 4){
                    count++;
                    }
                }
            cout << count <<endl;
        }
        return 0;
}
