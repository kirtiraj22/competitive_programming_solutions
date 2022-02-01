#include <iostream>

using namespace std;

int main()
{
    int n,sum;
    sum =0;
    cin >> n;
    for (int i = 0;i<=n;i++){
        sum = sum+i;
    }
    if (sum % 2 == 0){
        cout << 0;
    }
    else {
        cout << 1;
    }
    return 0;
}
