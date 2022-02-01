#include<bits/stdc++.h>
using namespace std;

int main(){
		int T,a,b,c,total=0;
		cin >> T;
		while(T--){
			cin >> a >> b >> c;
			if(a>0 && b>0 && c>0){
			total = a+b+c;
			if(total==180){
				cout << "YES"<<endl;
			}
			else{
				cout << "NO"<<endl;
			}
		}
	}
}
