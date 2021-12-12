#include <iostream>

using namespace std;

int main()
{
    int T,N,rev,rem;
    cin >> T;
    while(T--){
        cin >> N;
        while(N!=0){
            rem = N%10;
            rev = rev*10 + rem;
            N = N/10;
        }
        cout << rev;
        cout << "\n";
        rev = 0;
    }
    return 0;
}
