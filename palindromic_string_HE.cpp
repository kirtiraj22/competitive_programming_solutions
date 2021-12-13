#include <iostream>

using namespace std;

int main(){
    string S;
    cin>>S;
    string str_rev;
    for (int i = S.size()-1 ; i>=0 ; i--){
        str_rev.push_back(S[i]);
    }
    if (str_rev == S){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
