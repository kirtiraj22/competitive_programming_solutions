#include <iostream>

using namespace std;

int main()
{
    int n,T;
    cin >> T;
    while(T--){
    cin >> n;
    for (int i = 1 ; i <=n ; i++){
        for (int star = 1;star <=i;star++){
            cout << "*";
            }
            for (int j =1;j<=2*n-2*i;j++){
                cout << "#";}

        for (int l = 1;l<=i;l++){
            cout << "*";
        }
        cout << "\n";
        }
    }

    return 0;
}

