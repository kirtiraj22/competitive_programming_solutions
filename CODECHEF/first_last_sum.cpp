#include <iostream>

using namespace std;

int main()
{
        int T,first_digit,last_digit;
        cin >> T;
        while(T--){
            int num;
            int rem =0;
            cin>>num;
            last_digit=num%10;
            while(num!=0){
                rem=num%10;
                num=num/10;
            }
        first_digit=rem;
        cout << first_digit + last_digit<<endl;
                }
        return 0;
}
