#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n%2 == 0){
        if (n%4 != 0){
            cout << n/4 <<endl;
        }
        else{
            cout << (n/4)-1 << endl;
        }
    }
    else {
        cout << 0;
    }
    return 0;
}
