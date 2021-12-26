#include <iostream>

using namespace std;

int main()
{
    int n,k,t;
    int div = 0;
    cin >> n;
    cin >> k;
    while(n--){
        cin >> t;
        if(t%k==0){
            div++;
        }
    }
    cout << div;
}
