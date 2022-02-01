#include <iostream>

using namespace std;

int main()
{
    int t,num1,num2;
    int sum = 0;
    cin >> t;
    while(t--){
        cin >> num1 >> num2;
        sum = num1 + num2;
        cout << sum;
        cout<<endl;
    }
    return 0;
}
