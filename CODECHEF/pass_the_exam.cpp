#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        int ans = 0;
        cin >> a >> b >> c;
        if(a < 10 || b < 10 || c < 10){
            ans = 1;
        }
        if(a + b + c < 100){
            ans = 1;
        }
        if(ans == 1){
            cout << "FAIL" << endl;
        }
        else{
            cout << "PASS" << endl;
        }
    }
	return 0;
}
